#include <iostream>
int main() {
    const int i = 42;
    auto j = i; //int j = 42;
    const auto &k = i; //const auto int &k = i
    auto &ktwo = i; //same
    auto *p = &i; //const int *p
    const auto j2 = i, &k2 = i; //const int j2, const int &k2
    return 0;
}


