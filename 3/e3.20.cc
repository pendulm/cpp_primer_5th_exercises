#include <vector>
#include <iostream>
#include <cctype>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::toupper;

int main() {
    vector<int> iv;
    int i = 0;
    while (cin >> i)
        iv.push_back(i);
    decltype(iv.size()) idx;
    for(i = 0; i < (iv.size() / 2); ++i) {
    // for(i = 0; i < (iv.size() - 1); ++i) {
        cout << iv[i] + iv[iv.size() - i - 1] << " ";
    }
    cout << endl;
    return 0;
}

