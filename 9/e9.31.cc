#include <list>
#include <forward_list>
#include <iostream>
using std::list;
using std::forward_list;
using std::cout;
using std::endl;

/*int main() {
  list<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  auto iter = vi.begin();
  while (iter != vi.end()) {
    if (*iter % 2) {
      iter = vi.insert(iter, *iter);
      ++iter;
      ++iter;
    } else
      iter = vi.erase(iter);
  }
  for (auto e : vi)
    cout << e << " ";
  cout << endl;
  return 0;
  }*/

int main() {
  forward_list<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  auto iter = vi.begin();
  auto prev = vi.before_begin();
  while (iter != vi.end()) {
    if (*iter % 2) {
      iter = vi.insert_after(iter, *iter);
      prev = iter;
      ++iter;
    } else
      iter = vi.erase_after(prev);
  }
  for (auto e : vi)
    cout << e << " ";
  cout << endl;
  return 0;
}

