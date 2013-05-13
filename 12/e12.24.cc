#include <string>
using std::string;
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  string tmp;
  cin >> tmp;
  auto p = new char[tmp.size()+1];
  auto q = p;
  for (auto c : tmp)
    *q++ = c;
  *q = '\0';
  cout << p << endl;
  return 0;
}
