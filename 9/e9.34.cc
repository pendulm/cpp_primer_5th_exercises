#include <vector>
using std::vector;

int main() {
  vector<int> vi = {1, 2, 3, 4, 5, 6, 7};
  auto iter = vi.begin();
  while (iter != vi.end()) {
    if (*iter % 2)
      iter = vi.insert(iter, *iter);
    iter += 2;
  }
  return 0;
}
