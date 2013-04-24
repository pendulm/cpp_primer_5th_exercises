#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main() {
  int a, b;
  a = b = 0;
  cin >> a;
  cin >> b;
  cout << static_cast<double>(a) / b << endl;
  return 0;
}
