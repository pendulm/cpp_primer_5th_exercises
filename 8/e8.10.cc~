#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using std::string;
using std::istream;
using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::ifstream;
using std::getline;

void func(ifstream& strm, vector<string> &vec) {
  string s;
  while (strm >> s) {
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
    cout << e << endl;
  }
  return 0;
}
