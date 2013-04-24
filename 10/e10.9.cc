#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>
using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::copy;
using std::sort;
using std::unique;

void print_vec(const vector<int>& vi) {
  for (const auto& e: vi)
    cout << e << " ";
  cout << endl;
}

int main() {
  vector<int> vec;
  int i;
  while (cin >> i)
    vec.push_back(i);
  print_vec(vec);
  sort(vec.begin(), vec.end());
  print_vec(vec);
  auto e = unique(vec.begin(), vec.end());
  print_vec(vec);
  vec.erase(e, vec.end());
  print_vec(vec);
  return 0;
}
