#include <set>
using std::multiset;
using Sales_data = int;

bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{
  //  return lhs.isbn() < rhs.isbn();
  return lhs < rhs;
}

//multiset<Sales_data, bool (*)(const Sales_data&, const Sales_data&)>
//multiset<Sales_data, decltype(compareIsbn)*>
multiset<Sales_data, decltype(&compareIsbn)>
bookstore(compareIsbn);

int main() {
  return 0;
}
