#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using std::stable_sort;
using std::stable_partition;
using std::vector;
using std::string;
using std::unique;
using std::cin;
using std::cout;
using std::endl;


void biggies(vector<string>& words, decltype(words.size()) sz) {
  stable_sort(words.begin(), words.end(),
       [] (const string& a, const string& b) {
	 return a.size() < b.size();
       });
  auto uni_end = unique(words.begin(), words.end());
  words.erase(uni_end, words.end());
  auto pivot = stable_partition(words.begin(), uni_end, [sz] (const string& s) { return s.size() < sz; });
  for_each(pivot, uni_end, [] (const string& s) { cout << s << " "; });
  cout << endl;
}
  
int main() {
  vector<string> vec;
  string s;
  while (cin >> s)
    vec.push_back(s);
  biggies(vec, 5);
  return 0;
}
