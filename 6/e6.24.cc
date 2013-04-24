#include <iostream>
#include <cstddef>
#include <iterator>
using std::size_t;
using std::begin;
using std::end;
using std::endl;
using std::cout;

void print(const int (&ia)[10])
{
  for (auto p = begin(ia); p != end(ia); ++p) {
    cout << *p << endl;
  }
}

int main() {
  int a[11] = {};
  print(a);
  return 0;
}
  
