#include <iostream>
using std::cout;
using std::endl;

int main() {
  int var = 0;
  cout << [var] () mutable -> bool { 
    if (!var)
      return true;
    while (var != 0)
      --var;
    return false;
  }() << endl;

 return 0;
}
