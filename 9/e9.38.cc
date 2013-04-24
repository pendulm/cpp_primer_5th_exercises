#include <vector>
#include <iostream>
using std::vector;
using std::cout;
using std::endl;

void fill(vector<int>& v) {
  while (v.size() != v.capacity())
    v.push_back(1);
  v.push_back(1);
}

void print_cap(vector<int>& v) {
  cout << "capacity: "
       << v.capacity() << endl;
}

int main() {
  vector<int> vi;
  while (vi.capacity() < 1000000) {
    print_cap(vi);
    fill(vi);
  }
  print_cap(vi);
  return 0;
}
