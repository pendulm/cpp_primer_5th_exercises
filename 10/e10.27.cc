#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <iterator>
using std::list;
using std::vector;
using std::cin;
using std::endl;
using std::cout;
using std::unique_copy;
using std::back_inserter;
using std::for_each;

int main() {
  vector<int> vi;
  int i;
  while(cin >> i)
    vi.push_back(i);
  sort(vi.begin(), vi.end());
  list<int> lst;
  auto ins = back_inserter(lst);
  unique_copy(vi.cbegin(), vi.cend(), ins);
  for_each(lst.cbegin(), lst.cend(),
	   [] (int e) { cout << e << " "; });
  cout << endl;
  return 0;
}
