#include <memory>
using std::allocator;
#include <string>
using std::string;
#include <iostream>
using std::cin;

int main() {
  int n = 10;
  allocator<string> sa;
  auto const p = sa.allocate(n);
  auto q = p;
  string s;
  int count = 0;
  while (cin >> s && count != n) {
    sa.construct(q, s);
    ++count;
    ++q;
  }
  for (int i = 0; i != count; ++i) {
    sa.destroy(--q);
  }
  sa.deallocate(p, n);
  return 0;
}
