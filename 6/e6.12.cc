#include <iostream>
using std::cout;
using std::endl;
void swap(int& i, int& j) {
  int tmp = 0;
  tmp = i;
  i = j;
  j = tmp;
}

int main() {
  int a = 1;
  int b = 2;
  cout << a << " " << b << endl;
  swap(a, b);
  cout << a << " " << b << endl;
  return 0;
}
