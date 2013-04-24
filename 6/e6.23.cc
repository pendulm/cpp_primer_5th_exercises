#include <iostream>
#include <cstddef>
using std::size_t;

void print(const int *a, int count)
{
  for (size_t i = 0; i < count; ++i)
    std::cout << a[i] << (i+1 == count ? "\n" : " ");
}

int main() {
  int i = 0, j[2] = {0, 1};
  print(&i, 1);
  print(j, 2);
  return 0;
}
  
