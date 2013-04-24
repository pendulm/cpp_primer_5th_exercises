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
using std::partition;

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

bool longer_than_five(const string& s) {
  return s.size() < 5;
}


int main() {
  vector<string> vec;
  string s;
  while (cin >> s)
    vec.push_back(s);
  auto pivot = partition(vec.begin(), vec.end(), longer_than_five);
  while (pivot != vec.cend()) {
    cout << *pivot << " ";
    ++pivot;
  }
  cout << endl;
  return 0;
}
