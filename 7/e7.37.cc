class Sales_data {
public:
  Sales_data(std::string s = ""): bookNo (s) { }
  Sales_data(std::string s, unsigned cnt, double rev):
    bookNo(s), units_sold(cnt), revenue(rev*cnt) { }
  Sales_data(std::istream &is) { read(is, *this); }
};

Sales_data first_item(cin);

int main() {
  Sales_data next;
  Sales_data last("9-999-99999-9");
}
