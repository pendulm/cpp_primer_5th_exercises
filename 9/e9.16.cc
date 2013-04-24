#include <vector>
#include <list>
using std::vector;
using std::list;

bool cmp(list<int> l, vector<int> v) {
  if (l.size() != v.size())
    return false;
  auto il = l.begin();
  auto iv = v.begin();
  for (;il != l.end() && iv != v.end(); ++il, ++iv) {
    if (*il != *iv)
      return false;
  }
  if (iv == v.end() && il == l.end())
    return true;
  return false;
}

int main() {
  return 0;
}
