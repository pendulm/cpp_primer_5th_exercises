#include <string>
#include <deque>
#include <iostream>
#include <list>
using std::string;
using std::list;
using std::cout;
using std::endl;
using std::cin;

int main() {
  list<string> deq;
  string s;
  while (cin >> s) {
    deq.push_back(s);
  }
  for (auto i = deq.cbegin(); i != deq.cend(); ++i)
    cout << *i << endl;
  return 0;
}

  
