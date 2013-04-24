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
  while (true) {
    cin >> b;
    try {
      if (!b)
	throw runtime_error("divisor can't be zero");
      break;
    } catch (runtime_error) {
      //cout << e.what() << endl
      //<< "input it again" << endl;
    }
  }
  cout << "the resukt is " << static_cast<double>(a) / b << endl;
  return 0;
}
