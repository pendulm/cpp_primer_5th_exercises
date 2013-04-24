#include <iostream>
#include <cstddef>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
    constexpr size_t array_size = 10;
    int a[array_size]{};
    for (size_t i = 0; i < array_size; ++i)
        a[i] = i + 1;
    int b[array_size] = {};
    for (size_t i = 0; i < array_size; ++i)
        b[i] = a[i];
    vector<int> vi;
    for (auto i : a)
        vi.push_back(i);
    for (auto i : b)
        cout << i << " ";
    cout << endl << "---------------" << endl;
    for (auto i : vi)
        cout << i << " ";
    cout << endl << "---------------" << endl;

    return 0;
}
