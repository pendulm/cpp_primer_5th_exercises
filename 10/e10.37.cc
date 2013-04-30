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
  
  //istream_iterator<int> is_iter(cin), eof;
  ostream_iterator<int> os_iter(cout, " ");
  
  vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  list<int> lst;
  //list<int> lst(vi.begin(), vi.end());
  copy(vi.crbegin()+3, vi.crend()-2, back_inserter(lst));
  //  copy(vi.begin(), vi.end(), back_inserter(lst));
  
  copy(lst.cbegin(), lst.cend(), os_iter);
  cout << endl;
  return 0;
}
