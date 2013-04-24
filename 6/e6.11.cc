#include <iostream>

void reset(int& i) {
  i = 0;
}

int main() {
  int j = 5;
  std::cout << j << std::endl;
  reset(j);
  std::cout << j << std::endl;
  return 0;
}
