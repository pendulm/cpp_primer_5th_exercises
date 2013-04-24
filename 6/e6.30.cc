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

bool str_subrange(const string &str1, const string &str2)
{
  if (str1.size() == str2.size())
    return str1 == str2;
  auto size = (str1.size() < str2.size())
    ? str1.size() : str2.size();
  for (decltype(size) i = 0; i != size; ++i) {
    if (str1[i] != str2[i])
      return true;
  }
  //g++ can't detect here
  //clang did
}
 

int main(int argc, char *argv[])
{
  bool a = str_subrange("aaa", "bbb");
  return a;
}
  
