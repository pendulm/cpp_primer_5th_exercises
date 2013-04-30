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
using std::copy;


int main() {
  istream_iterator<int> is_iter(cin), eof;
  vector<int> vi(is_iter, eof);
  sort(vi.begin(), vi.end());

  ostream_iterator<int> os_iter(cout, " ");
  copy(vi.cbegin(), vi.cend(), os_iter);
  return 0;
}
