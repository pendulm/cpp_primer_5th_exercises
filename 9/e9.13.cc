#include <vector>
#include <list>
using std::vector;
using std::list;

int main() {
  list<int> l = {1, 2, 3};
  vector<double> v1(l.begin(), l.end());
  vector<int> vi = {1, 2, 3};
  vector<int> v2(vi.begin(), vi.end());
  return 0;
}
