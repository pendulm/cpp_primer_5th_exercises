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

#include <list>
using std::list;

int main() {
  
  istream_iterator<int> is_iter(cin), eof;
  list<int> lst(is_iter, eof);
  ostream_iterator<int> os_iter(cout, " ");
  //this pos_iter is const
  auto pos_iter = find(lst.crbegin(), lst.crend(), 0);
  copy(lst.cbegin(), pos_iter,
       os_iter);
  // how to convert a reverse iterator to normal iterator?
  cout << endl;
  copy(pos_iter.base(), lst.cend(),
       os_iter);
  cout << endl;
  return 0;
}
