#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using std::string;
using std::istream;
using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::ifstream;
using std::getline;
using std::istringstream;
using std::endl;

void func(ifstream& strm, vector<string> &vec) {
  string s;
  while (getline(strm, s)) {
    vec.push_back(s);
  }
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    cerr << "specify a file name" << endl;
    return 1;
  }
  ifstream in(argv[1]);
  vector<string> vec;
  func(in, vec);
  for (auto e : vec) {
    istringstream is(e);
    string s;
    while (is >> s)
      cout << s << endl;
  }
  return 0;
}
