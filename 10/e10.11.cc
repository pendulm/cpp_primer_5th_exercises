#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <iterator>
using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::copy;
using std::sort;
using std::unique;
using std::stable_sort;

void print_vec(const vector<string>& vi) {
  for (const auto& e: vi)
    cout << e << " ";
  cout << endl;
}
bool isShort(const string& s1, const string& s2) {
  return s1.size() < s2.size();
}

void elimDumps(vector<string>& vec) {
  stable_sort(vec.begin(), vec.end(), isShort);
  auto e = unique(vec.begin(), vec.end());
  vec.erase(e, vec.end());
}


int main() {
  vector<string> vec;
  string s;
  while (cin >> s)
    vec.push_back(s);
  print_vec(vec);
  elimDumps(vec);
  print_vec(vec);
  return 0;
}
