#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item1;
    Sales_item item2;
    std::cin >> item1 >> item2;
    std::cout << "The sum of two book is " << item1 + item2 << std::endl;
    return 0;
}
