#include <iostream>
#include <string>
#include <vector>
using std::endl;
using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::istream;
using std::ostream;

class Person {
  friend istream& read(istream& is, Person& p);
  friend ostream& print(ostream& os, const Person& p);
private:
  string name;
  string address;
public:
  const string& get_name() const;
  const string& get_addr() const;

  Person() = default;
  Person(Person& p) : name(p.name), address(p.address) {}
};

const string& (Person::get_name)() const { return name; }
const string& (Person::get_addr)() const { return address; }

istream&
read(istream& is, Person& p)
{
  is >> p.name >> p.address;
  return is;
}

ostream&
print(ostream& os, const Person& p)
{
  os << p.name << " " << p.address << endl;
  return os;
}

int main() {
  return 0;
}
