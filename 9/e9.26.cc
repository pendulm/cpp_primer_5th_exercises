#include <list>
#include <vector>
#include <iostream>
using std::list;
using std::vector;
using std::cout;
using std::endl;


int main() {
  int ia[] = {0, 1, 1, 2, 3, 5, 8 ,13, 21, 55, 89 };
  vector<int> vi;
  list<int> li;
  for (auto e : ia) {
    li.push_back(e);
    vi.push_back(e);
  }
  auto viter = vi.begin();
  auto liter = li.begin();
  for (auto e: ia) {
    if (e % 2 == 0) {
      liter = li.erase(liter);
      ++viter;
    } else {
      viter = vi.erase(viter);
      ++liter;
    }
  }
  for (auto e: li)
    cout << e << " ";
  cout << endl;
  for (auto e: vi)
    cout << e << " ";
  cout << endl;
    
  return 0;

}
