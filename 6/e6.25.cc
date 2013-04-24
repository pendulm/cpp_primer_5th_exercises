#include <iostream>
#include <cstddef>
#include <iterator>
#include <string>
using std::string;
using std::size_t;
using std::begin;
using std::end;
using std::endl;
using std::cout;

int main(int argc, char *argv[]) {
  if (argc != 3) {
    std::cerr << "number of arguments is not 2" << endl;
    return -1;
  }
  string a = argv[1];
  string b = argv[2];
  cout << a + b << endl;
}
  
