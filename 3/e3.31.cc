#include <iostream>
#include <cstddef>
using std::cout;
using std::endl;

int main() {
    constexpr size_t array_size = 10;
    int a[array_size] = {};
    for (size_t i = 0; i < array_size; ++i)
        a[i] = i + 1;
    for (auto i : a)
        cout << i << " ";
    cout << endl;
    return 0;
}
