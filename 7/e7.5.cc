#include <iostream>
#include <string>
#include <vector>
using std::endl;
using std::cin;
using std::cout;
using std::string;
using std::vector;

struct Person {
  string name;
  string address;
};

string& (Person::get_name)() const { return name; }
string& (Person::get_addr)() const { return address; }

int main() {
  return 0;
}
