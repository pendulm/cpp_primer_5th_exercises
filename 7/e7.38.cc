#include <iostream>
#include <string>
using std::cin;

class Sales_data {
friend std::istream &read(std::istream&, Sales_data&);
public:
  Sales_data(std::string s = ""): bookNo (s) { }
  Sales_data(std::string s, unsigned cnt, double rev):
    bookNo(s), units_sold(cnt), revenue(rev*cnt) { }
  Sales_data(std::istream &is = cin) { read(is, *this); }
private:
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data first_item(cin);

int main() {
  Sales_data next;
  Sales_data last("9-999-99999-9");
}
