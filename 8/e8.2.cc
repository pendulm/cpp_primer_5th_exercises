#include <iostream>
#include <string>
using std::string;
using std::istream;
using std::cin;
using std::cout;

istream& func(istream &strm) {
  string s;
  while (strm >> s) {
    cout << s << std::endl;
  }
  strm.clear();
  return strm;
}

int main() {
  istream& in = func(cin);
  if (in.good()) {
    cout << "yes!" << std::endl;
  }
  return 0;
}








