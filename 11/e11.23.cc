#include <map>
using std::map;
using std::multimap;
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

void add_family_child(multimap<string, string>& f, string last_name,
		      string child_name)
{
  f.insert({last_name, child_name});
}

int main() {
  multimap<string, string> family;
  add_family_child(family, "green", "jim");
  add_family_child(family, "green", "rose");
  add_family_child(family, "han", "meimei");
  add_family_child(family, "li", "lei");
  for (const auto& pair : family) {
    cout << pair.first << " " << pair.second
	   << endl;
  }
  
  return 0;
}
