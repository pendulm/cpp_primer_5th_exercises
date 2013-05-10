#include <vector>
using std::vector;
#include <algorithm>
using std::copy;
#include <iterator>
using std::istream_iterator;
using std::ostream_iterator;
using std::back_inserter;
#include <iostream>
using std::cin;
using std::endl;
using std::cout;

vector<int>* func1() {
  return new vector<int>();
}

void getvalue(vector<int>& vi) {
  istream_iterator<int> in_iter(cin), eof;
  copy(in_iter, eof, back_inserter(vi));
}

void putvalue(vector<int>& vi) {
  ostream_iterator<int> out_iter(cout, "\n");
  copy(vi.begin(), vi.end(), out_iter);
}

int main() {
  auto p = func1();
  getvalue(*p);
  putvalue(*p);
  delete p;
  p = nullptr;

  return 0;
}
