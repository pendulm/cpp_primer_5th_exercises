#include <numeric>
#include <iostream>
#include <vector>
using std::accumulate;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<double> vi;
  double d;
  while (cin >> d) {
    vi.push_back(d);
  }
  cout << "the sum is: " << accumulate(vi.cbegin(), vi.cend(), 0.0)
       << endl;
  return 0;
}
