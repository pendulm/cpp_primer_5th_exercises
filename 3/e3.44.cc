#include <iostream>
#include <cstddef>
#include <vector>
#include <iterator>
#include <cstring>
using std::cout;
using std::begin;
using std::end;
using std::endl;
using std::vector;

int main() {
    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
    using int_a = int[4];

    for (int_a *p = begin(ia); p != end(ia); ++p) {
        for (auto q = begin(*p); q != end(*p); ++q)
            cout << *q << " ";
        cout << endl;
    }
    
    // noraml
    return 0;
}
