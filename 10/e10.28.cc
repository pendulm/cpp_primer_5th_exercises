#include <algorithm>
#include <deque>
#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <forward_list>
using std::list;
using std::vector;
using std::cin;
using std::endl;
using std::cout;
using std::unique_copy;
using std::back_inserter;
using std::deque;
using std::inserter;
using std::front_inserter;
using std::forward_list;

int main() {
  vector<int> vi;
  list<int> lst;
  deque<int> dq;
  forward_list<int> flst;
  int i = 1;
  auto ins = back_inserter(vi);
  while (i <= 9) {
    ins = i;
    ++i;
  }
  copy(vi.cbegin(), vi.cend(), inserter(lst, lst.begin()));
  copy(vi.cbegin(), vi.cend(), back_inserter(dq));
  copy(vi.cbegin(), vi.cend(), front_inserter(flst));

  cout << "flst" << endl;
  for_each(flst.cbegin(), flst.cend(),
	   [] (int e) { cout << e << " "; });
  cout << endl;

  cout << "dq" << endl;
  for_each(dq.cbegin(), dq.cend(),
	   [] (int e) { cout << e << " "; });
  cout << endl;

  cout << "lst" << endl;
  for_each(lst.cbegin(), lst.cend(),
	   [] (int e) { cout << e << " "; });
  cout << endl;
  
  return 0;
}
