#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <fstream>
using std::ifstream;
using std::ofstream;

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
using std::copy_if;


int main() {
  
  istream_iterator<int> is_iter(cin), eof;
  vector<int> vi(is_iter, eof);
  ostream_iterator<int> os_iter(cout, " ");
  //  copy(vi.crbegin(), vi.crend(), os_iter);
  auto iter = vi.end();
  while (iter != vi.begin()) {
    cout << *(--iter) << " ";
  }
  cout << endl;
  return 0;
}
