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

string (&(func()))[10];

using str_arr = string[10];
str_arr &(func())

auto func() -> string (&)[10];

auto &type = string a[10];
typedecl(a) func();

int main(int argc, char *argv[])
{
  int ia[10];
  for (int i = 0; i != 10; ++i)
    get(ia, i) = i;
  for (auto i : ia)
    cout << i << " ";
  cout << endl;
    
}
  
