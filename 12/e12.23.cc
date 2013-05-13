#include <string>
using std::string;
#include <iostream>
using std::cerr;
using std::cout;
using std::cin;
using std::endl;
#include <cstring>
using std::strlen;
using std::strcpy;
using std::strcat;

int main(int argc, char *argv[]) {
  if (argc < 3) {
    cerr << "arguments not enough" << endl;
    return 1;
  }
  auto sz = strlen(argv[1]) + strlen(argv[2]);
  sz += 1;
  auto p = new char[sz];
  strcpy(p, argv[1]);
  strcat(p, argv[2]);
  cout << p << endl;
  cout << string(argv[1]) + string(argv[2]) << endl;
  return 0;
}
