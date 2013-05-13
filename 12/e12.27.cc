#include <iostream>
#include <memory>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cstddef>
#include <algorithm>

using namespace std;



class QueryResult;
class TextQuery {
public:
  QueryResult query(string word);
  TextQuery(ifstream& infile);
private:
  shared_ptr<vector<string>> plines;
  map<string, shared_ptr<multiset<size_t>>> occurences;
};
  
class QueryResult {
  friend class TextQuery;
public:
  void print(ostream& os);
  QueryResult(): total_occur(0) {};
private:
  size_t total_occur;
  string word;
  shared_ptr<multiset<size_t>> poccurence;
  shared_ptr<vector<string>> plines;
};

TextQuery::TextQuery(ifstream& infile)
  : plines(make_shared<vector<string> >())
{
  auto& lines = *plines;
  string l;
  while (getline(infile, l)) {
    lines.push_back(l);
  }
}
  
size_t count_occurences(string word, string line) {
  istringstream iss(line);
  string s;
  size_t count = 0;
  while (iss >> s) {
    auto n = s.find(word);
    if (n == string::npos)
      continue;
    auto func = [] (char c) -> bool { return ispunct(c); };
    if (all_of(s.begin(), s.begin()+n, func)
	&& all_of(s.begin()+n+word.size(), s.end(), func))
      ++count;
  }
  return count;
}

QueryResult TextQuery::query(string word) {
  QueryResult rslt;
  rslt.plines = plines;
  rslt.word = word;
  auto iter = occurences.find(word);
  if (iter != occurences.end()) {
    rslt.poccurence = iter->second;
    rslt.total_occur = (iter->second)->size();
  } else {
    auto p = make_shared<multiset<size_t>>();
    occurences[word] = p;
    for (decltype(plines->size()) i = 0; i != plines->size(); ++i) {
      auto count = count_occurences(word, (*plines)[i]);
      for (size_t j = 0; j != count; ++j) {
	(*p).insert(i);
      }
    }
    rslt.total_occur = p->size();
    rslt.poccurence = p;
  }
  return rslt;
}

void QueryResult::print(ostream& os) {
  os << word << " occurs " << total_occur << " times" << endl;
  auto lines_set = *poccurence;
  size_t last = 0;
  bool isfirst = true;
  for (auto i : lines_set) {
    if (isfirst) {
      isfirst = false;
      cout << "\t(line " << i+1 << ") " << (*plines)[i] << endl;
    } else if (i != last) {
      cout << "\t(line " << i+1 << ") " << (*plines)[i] << endl;
    }
    last = i;
  }
}

ostream& print(ostream& os, QueryResult rslt) {
  rslt.print(os);
  return os;
}

void runQueries(ifstream &infile) {
  TextQuery tq(infile);
  while (true) {
    cout << "enter word to look for, or q to quit: ";
    string s;
    if (!(cin >> s) || s == "q") break;
    print(cout, tq.query(s)) << endl;
  }
}


int main(int argc, char* argv[]) {
  if (argc != 2) {
    cerr << "arguments error" << endl;
    return 1;
  }
  ifstream infile(argv[1]);
  runQueries(infile);
  return 0;
}
