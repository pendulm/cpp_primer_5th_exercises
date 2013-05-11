#include <memory>
using std::unique_ptr;

int main() {
  unique_ptr<int> p(new int(1));
  unique_ptr<int> q(p);
  return 0;
}
