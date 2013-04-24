#include <iostream>
int main() {
    int a = 3, b = 4;
    decltype(a) c = a; //int c = a
    decltype((b)) d = a; //int &d = a
    c += 2; //c = 3
    ++d; //a = 4
    std::cout << a << std::endl;
    std::cout << c << std::endl;
}
