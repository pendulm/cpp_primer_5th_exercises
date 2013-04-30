#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <fstream>
using std::ifstream;

#include <iterator>
using std::istream_iterator;
using std::ostream_iterator;

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <algorithm>
using std::sort;


int main() {
  ifstream ifs(__FILE__);
  istream_iterator<string> is_iter(ifs), eof;
  vector<string> vs(is_iter, eof);
  ostream_iterator<string> os_iter(cout, "\n");
  copy(vs.cbegin(), vs.cend(), os_iter);
  return 0;
}
