#include <iostream>
using std::cout;
using std::endl;

void f() {
  cout << 1 << endl;
}
void f(int) {
  cout << 2 << endl;
}
void f(int, int) {
  cout << 3 << endl;
}
void f(double, double = 3.14) {
  cout << 4 << endl;
}
int main() {
  f(2.56, 42);
  //viable: 3 4
  //ambiguous

  f(42);
  //viable: 2 4
  //2

  f(42, 0);
  //viable:  3 4
  //3

  f(2.56, 3.14);
  //viable: 3 4
  //best: 4
}
