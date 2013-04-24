#include <vector>
#include <iostream>
#include <cctype>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector<int> iv(10);
    int last = 1;
    for (auto iter = iv.begin(); iter != iv.end(); ++iter) {
        last *= 2;
        *iter = last;
    }
    for (auto i  : iv)
        cout << i << " ";
    cout << endl;
    return 0;
}

