#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>
using std::vector;
using std::cout;
using std::endl;
using std::fill_n;
using std::back_inserter;

int main() {
  vector<int> vi;
  fill_n(back_inserter(vi), 10, 0);
  for (const auto& e: vi)
    cout << e << endl;
  return 0;
}
