#include <iostream>

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
  return 0;
}
