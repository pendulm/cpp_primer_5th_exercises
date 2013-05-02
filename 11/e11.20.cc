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
#include <algorithm>
using std::find;
#include <vector>
using std::vector;

void lower_and_strip(string& s) {
  if (s.empty())
    return;

  auto l = s.begin(), r = s.end();
  while (l < r && ispunct(*l))
    ++l;
  while (l < r && ispunct(*(r-1)))
    --r;

  // must remove tail first, otherwise the iterator will be invalid
  s.erase(r, s.end());
  s.erase(s.begin(), l);

  for (auto& c : s) {
    c = tolower(c);
  }
}

int main() {
  vector<string> exclude = {"the", "but", "and", "or", "an", "a"};
  map<string, size_t> word_count;
  string s;
  while (cin >> s) {
    // s is the same object, so erase wouldn't change memory allocate
    lower_and_strip(s);
    if (find(exclude.cbegin(), exclude.cend(), s) == exclude.end() &&
	!s.empty()) {
      auto ret = word_count.insert({s, 1});
      if (!ret.second) {
	++ret.first->second;
      }
    }
  }
  for (const auto& pair : word_count) {
    cout << pair.first << ":" << pair.second << endl;
  }
  return 0;
}
    
