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

void add_family_child(map<string, vector<string> >& f, string last_name,
		      string child_name)
{
  f[last_name].push_back(child_name);
}

int main() {
  map<string, vector<string> > family;
  add_family_child(family, string("green"), string("jim"));
  add_family_child(family, string("green"), string("rose"));
  add_family_child(family, string("han"), string("meimei"));
  add_family_child(family, string("li"), string("lei"));
  for (const auto& pair : family) {
    const auto last_name = pair.first;
    for (const auto child_name : pair.second)
      cout << child_name << " " << last_name << endl;
  }
  
  return 0;
}
