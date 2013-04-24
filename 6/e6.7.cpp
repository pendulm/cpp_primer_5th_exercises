#include <iostream>

int gen_seq() {
  static int n = 0;
  return n++;
}

int main() {
  for (int i = 0; i < 10; ++i)
    std::cout << gen_seq() << std::endl;
  return 0;
}
