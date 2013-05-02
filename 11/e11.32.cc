#include <map>
using std::multimap;
#include <set>
using std::set;
#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;
#include <algorithm>
using std::sort;

int main() {
  multimap<string, string> auther_works;
  auther_works.insert({"shakespeare", "twelfth night"});
  auther_works.insert({"shakespeare", "the tempest"});
  auther_works.insert({"shakespeare", "as you like it"});
  auther_works.insert({"hugo", "les miserables"});
  auther_works.insert({"hugo", "the hunchback of notre-dame"});
  auther_works.insert({"bronte", "wuthering heights"});

  set<string> authors;
  for (const auto& p : auther_works) {
    authors.insert(p.first);
  }
  
  for (const auto& author : authors) {
    auto p = auther_works.equal_range(author);
    //    vector<string> works(p.first, p.second);
    vector<string> works;
    while (p.first != p.second) {
      works.push_back(p.first->second);
      ++p.first;
    }
    sort(works.begin(), works.end());
    cout << author << ":" << endl;
    for (const auto e : works)
      cout << "\t<" << e << ">" << endl;
  }

  return 0;
}
