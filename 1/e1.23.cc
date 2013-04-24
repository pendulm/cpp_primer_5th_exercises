#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item cur, last;
    int isfirst = 1;
    while (std::cin >> cur) {
        if (isfirst) {
            isfirst = 0;
            last = cur;
        } else if (cur.isbn() == last.isbn()) {
            last += cur;
        } else {
            std::cout << last << std::endl;
            last = cur;
        }
    }
    std::cout << last << std::endl;
    return 0;
}
