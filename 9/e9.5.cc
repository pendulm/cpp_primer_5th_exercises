#include <vector>
using std::vector;
using iter = vector<int>::iterator;

iter is_in(iter beg, iter end, int val)
{
  while (beg != end) {
    if (*beg == val) {
      return beg;
    }
    ++beg;
  }
  return end;
}

int main() {
  return 0;
}
