#include <string>
#include <algorithm>
#include <vector>
#include <functional>
#include <iostream>
using std::string;
using std::vector;
using std::bind;
using namespace std::placeholders;
using std::cout;
using std::cin;
using std::endl;
using std::count_if;

bool long_than(const string& s, string::size_type sz) {
  return s.size() > 6;
}

int main() {
  vector<string> vec;
  string s;
  while (cin >> s)
    vec.push_back(s);
  auto long_cnt = count_if(vec.cbegin(), vec.cend(),
			   bind(long_than, _1, 6));
  cout << vec.size() - long_cnt << endl;
  return 0;
}
