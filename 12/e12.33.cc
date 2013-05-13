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
using line_no = vector<string>::size_type;


class QueryResult;
class TextQuery {
public:
  QueryResult query(string word);
  TextQuery(ifstream& infile);
private:
  shared_ptr<vector<string>> plines;
  map<string, shared_ptr<multiset<line_no>>> occurences;
};
  
class QueryResult {
  friend class TextQuery;
public:
  void print(ostream& os) const;
  QueryResult(): total_occur(0) {};
  multiset<line_no>::iterator begin();
  multiset<line_no>::iterator end();
  shared_ptr<vector<string>> get_file();
private:
  line_no total_occur;
  string word;
  shared_ptr<multiset<line_no>> poccurence;
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
  
line_no count_occurences(string word, string line) {
  istringstream iss(line);
  string s;
  line_no count = 0;
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

QueryResult TextQuery::query(const string word) {
  QueryResult rslt;
  static auto nodata = make_shared<multiset<line_no>>();
  rslt.plines = plines;
  rslt.word = word;
  auto iter = occurences.find(word);
  if (iter != occurences.end()) {
    rslt.poccurence = iter->second;
    rslt.total_occur = (iter->second)->size();
  } else {
    auto p = make_shared<multiset<line_no>>();
    for (decltype(plines->size()) i = 0; i != plines->size(); ++i) {
      auto count = count_occurences(word, (*plines)[i]);
      for (line_no j = 0; j != count; ++j) {
	(*p).insert(i);
      }
    }
    if (p->size() == 0) {
      p = nodata;
    }
    occurences[word] = p;
    rslt.total_occur = p->size();
    rslt.poccurence = p;
  }
  return rslt;
}

inline string make_plural(const string word, const size_t count) {
  return count > 1 ? word + 's' : word;
}

void QueryResult::print(ostream& os) const {
  os << word << " occurs " << total_occur
     << " " << make_plural("time", total_occur) << endl;
  auto lines_set = *poccurence;
  line_no last = 0;
  bool isfirst = true;
  for (auto i : lines_set) {
    if (isfirst || i != last) {
      isfirst = false;
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
