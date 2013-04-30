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
  string s;
  cin >> s;
  ifstream ifile(s);
  cin >> s;
  ofstream ofile1(s);
  cin >> s;
  ofstream ofile2(s);

  istream_iterator<int> is_iter(ifile), eof;
  vector<int> vi(is_iter, eof);
  
  ostream_iterator<int> os_iter1(ofile1, " "), os_iter2(ofile2, "\n");
  copy_if(vi.cbegin(), vi.cend(), os_iter1, [] (int e) { return e % 2 == 1;});
  copy_if(vi.cbegin(), vi.cend(), os_iter2, [] (int e) { return e % 2 == 0;});
  
  return 0;
}
