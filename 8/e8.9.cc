#include <iostream>
#include <sstream>
#include <string>
using std::istream;
using std::cin;
using std::cout;
using std::istringstream;
using std::string;

istream& func(istream &strm) {
  string s;
  while (strm >> s) {
    cout << s << std::endl;
  }
  strm.clear();
  return strm;
}

int main() {
  string s = "aaaa bbb cccc";
  istringstream in(s);
  func(in);
  return 0;
}









