#include <iostream>
#include <cstddef>
#include <vector>
#include <iterator>
using std::cout;
using std::endl;
using std::vector;

int main() {
    int a[10];
    for(auto p(a); p != std::end(a); ++p)
        *p = 0;
    for (auto i : a)
        cout << i << " ";
    cout << endl;

    return 0;
}
