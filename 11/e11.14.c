#include <map>
using std::map;
#include <string>
using std::string;
#include <set>
using std::set;
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cctype>
using std::tolower;
#include <vector>
using std::vector;
#include <utility>
using std::pair;

void add_family_child(map<string, vector<string> >& f, string last_name,
		      pair<string, string> child_info)
{
  f[last_name].push_back(child_info);
}

int main() {
  map<string, vector<pair<string, string>>> family;
  add_family_child(family, string("green"), {"jim", "1989-03-30"});
  add_family_child(family, string("green"), {"rose", "1990-06-05"});
  add_family_child(family, string("han"), {"meimei", "1989-12-11"});
  add_family_child(family, string("li"), {"lei", "1988-07-25"});
  for (const auto& pair : family) {
    const auto last_name = pair.first;
    for (const auto& child_info : pair.second)
      cout << child_info.first << " " << last_name << ":" << child_info.second
	   << endl;
  }
  
  return 0;
}
