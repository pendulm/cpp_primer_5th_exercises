#include <map>
using std::multimap;
#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  multimap<string, string> auther_works;
  auther_works.insert({"shakespeare", "twelfth night"});
  auther_works.insert({"shakespeare", "the tempest"});
  auther_works.insert({"shakespeare", "as you like it"});
  auther_works.insert({"hugo", "les miserables"});
  auther_works.insert({"hugo", "the hunchback of notre-dame"});
  auther_works.insert({"bronte", "wuthering heights"});
  string author = "shakespeare";
  string work = "lir";
  auto iter = auther_works.find(author);
  while (iter != auther_works.end() && iter->first == author) {
    if (iter->second == work) {
      auther_works.erase(iter);
      break;
    }
    ++iter;
  }

  for (const auto& p : auther_works) {
    cout << p.first << " : <" << p.second << ">" << endl;
  }
  return 0;
}
