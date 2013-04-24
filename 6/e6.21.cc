#include <iostream>

int cmp(int a, const int *b)
{
  int c = *b;
  return a > c ? a : c;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << cmp(a, &b) << std::endl;
  return 0;
}
  
