/* vector<NoDefault> vec(10);

this is default initialize
and NoDefault didnt have a default constructor
so this statement is illegal.
*/

#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

class NoDefault {
public:
  NoDefault(int) {};
};

class C {
  NoDefault member;
public:
  C () : member(0) {};
};

int main() {
  C c;
  vector<C> vec(10); // yes C has default constructor
  return 0;
}
