#include <string>
#include <deque>
#include <iostream>
using std::string;
using std::deque;
using std::cout;
using std::endl;
using std::cin;

int main() {
  deque<string> deq;
  string s;
  while (cin >> s) {
    deq.push_back(s);
  }
  for (auto i = deq.cbegin(); i != deq.cend(); ++i)
    cout << *i << endl;
  return 0;
}

  
