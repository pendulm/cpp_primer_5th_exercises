#include <iostream>
#include <cstddef>
#include <iterator>
#include <string>
#include <initializer_list>
using std::initializer_list;
using std::string;
using std::size_t;
using std::begin;
using std::end;
using std::endl;
using std::cout;

int sum(initializer_list<int> il)
{
  int s = 0;
  for (auto e : il)
    s += e;
  return s;
}

int main(int argc, char *argv[])
{
  cout << sum({1, 2, 3, 4, 5}) << endl;
  return 0;
}
  
