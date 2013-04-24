#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
#include <iterator>
using std::vector;
using std::list;
using std::cout;
using std::endl;
using std::cin;
using std::fill_n;
using std::back_inserter;
using std::copy;

int main() {
  vector<int> vec;
  list<int> lst;
  int i;
  while (cin >> i)
    lst.push_back(i);
  copy(lst.cbegin(), lst.cend(), vec.begin());
  //  copy(lst.cbegin(), lst.cend(), back_inserter(vec));
  for (const auto& e: vec)
    cout << e << endl;
  return 0;
}
