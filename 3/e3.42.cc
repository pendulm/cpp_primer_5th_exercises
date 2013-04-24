#include <iostream>
#include <cstddef>
#include <vector>
#include <iterator>
#include <cstring>
using std::cout;
using std::endl;
using std::vector;

int main() {
    int a[5] = {};
    vector<int> iv{1, 2, 3, 4, 5};
    for (decltype(iv.size()) i = 0; i != iv.size(); ++i) {
        a[i] = iv[i];
    }
    for (auto p : a)
        cout << p << " ";
    cout << endl;
    return 0;
}
