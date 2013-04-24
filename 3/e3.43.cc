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
    // range for
    // for (auto &row : ia) {
        // for (auto i : row)
            // cout << i << " ";
        // cout << endl;
    // }

    // pointer
    // for (auto p = begin(ia); p != end(ia); ++p) {
        // for (auto q = begin(*p); q != end(*p); ++q)
            // cout << *q << " ";
        // cout << endl;
    // }
    
    // noraml
    for (size_t i = 0; i < sizeof(ia) / sizeof (ia[0]); ++i) {
        for (size_t j = 0; j < sizeof(ia[0]) / sizeof(ia[0][0]); ++j)
            cout << ia[i][j] << " ";
        cout << endl;
    }
    return 0;
}
