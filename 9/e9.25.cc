#include <list>
#include <iostream>
using std::list;
using std::cout;
using std::endl;


int main() {
  list<int> li = {1, 2, 3, 4, 5};
  li.erase(li.begin(), li.end());
  for (auto e : li)
    cout << e << " ";
  cout << endl;
  return 0;

}
