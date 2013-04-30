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
using std::count_if;

vector<string>::size_type
biggies(vector<string>& words, decltype(words.size()) sz) {
  stable_sort(words.begin(), words.end(),
       [] (const string& a, const string& b) {
	 return a.size() < b.size();
       });
  auto uni_end = unique(words.begin(), words.end());
  words.erase(uni_end, words.end());
  return count_if(words.begin(), uni_end,
		  [sz] (string& s) { return s.size() > sz;});
}
  
int main() {
  vector<string> vec;
  string s;
  while (cin >> s)
    vec.push_back(s);
  cout << biggies(vec, 5) << endl;
  return 0;
}
