#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::runtime_error;

int main() {
  int a, b;
  a = b = 0;
  cin >> a;
  cin >> b;
  if (b == 0)
    throw runtime_error("divisor can't be zero");
  cout << static_cast<double>(a) / b << endl;
  return 0;
}
