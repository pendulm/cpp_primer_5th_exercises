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

int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};

decltype(odd) &arrPtr(int i)
{
  return (i % 2) ? odd : even;
}

int main(int argc, char *argv[])
{
  decltype(odd) arr;
  for (auto e : arrPtr(1))
    cout << e << " ";
  cout << endl;
  for (auto e : arrPtr(2))
    cout << e << " ";
  cout << endl;

}
  
