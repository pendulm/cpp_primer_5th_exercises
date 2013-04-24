#include <numeric>
#include <iostream>
#include <vector>
using std::accumulate;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> vi;
  int i;
  while (cin >> i) {
    vi.push_back(i);
  }
  cout << "the sum is: " << accumulate(vi.cbegin(), vi.cend(), 0)
       << endl;
  return 0;
}
