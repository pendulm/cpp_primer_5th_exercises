#include <iostream>
#include <memory>
using std::shared_ptr;

int main() {
  shared_ptr<double> p1;
  *p1 = 5;
  std::cout << *p1 << std::endl;
    return 0;
}
