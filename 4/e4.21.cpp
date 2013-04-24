#include <iostream>
#include <vector>
using std::vector;

int main() {
    vector<int> iv = {1, 2, 3, 4, 5};
    for (auto i = iv.begin(); i != iv.end(); ++i) {
        *i = *i % 2 == 1 ? *i * 2 : *i;
    }
    for (auto e : iv)
        std::cout << e << std::endl;
    return 0;
}
