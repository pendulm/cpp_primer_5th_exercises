#include <string>
#include <deque>
#include <iostream>
#include <list>
using std::string;
using std::list;
using std::deque;
using std::cout;
using std::endl;
using std::cin;

bool is_even(int num) {
  return num % 2 == 0;
}


int main() {
  list<int> lst = {1, 4 ,5, 9 , 10, 2};
  deque<int> even, odd;
  for (auto i : lst) {
    if (is_even(i))
      even.push_back(i);
    else
      odd.push_back(i);
  }
  for (auto i : even)
    cout << i << " ";
  cout << endl;
  for (auto i : odd)
    cout << i << " ";
  cout << endl;  
  return 0;
}
  
