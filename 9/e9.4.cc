#include <vector>
using std::vector;

bool is_in(vector<int>::iterator beg, vector<int>::iterator end, int val)
{
  bool find = false;
  while (beg != end) {
    if (*beg == val) {
      find = true;
      return find;
    }
    beg++;
  }
  return find;
}

int main() {
  return 0;
}
