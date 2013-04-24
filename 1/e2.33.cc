#include <iostream>
int main() {
    auto i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;//const int *e
    const auto f = ci;
    auto &g = ci;
    a = 42; //int a = 42
    b = 42; //int b = 42
    c = 42; //int c = 42
    //d = 42; //error, int *c
    //e = 42; //error, const int *e
    //f = 42; //error, const int f = 1
    return 0;
}


