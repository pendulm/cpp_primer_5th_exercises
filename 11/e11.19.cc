multiset<Sales_data, decltype(compareIsbn)*>bookstore(compareIsbn);
multiset<sales_data, bool (*)(const Sales_data &lhs, const Sales_data &rhs)>::iterator iter = bookstore.begin();
