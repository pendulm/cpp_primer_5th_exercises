#include <iostream>
#include <cstddef>
#include <vector>
#include <iterator>
#include <cstring>
using std::cout;
using std::endl;
using std::vector;

int main() {
    int a[] = {1, 2, 3, 4, 5};
    vector<int> iv(std::begin(a), std::end(a));
    for (auto i : iv)
        cout << i << " ";
    cout << endl;
    return 0;
}
