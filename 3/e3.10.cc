#include <string>
#include <iostream>
#include <cctype>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::ispunct;

int main() {
    string s;
    cin >> s;
    for (auto &c : s) {
        if (!ispunct(c))
            cout << c;
    }
    std::cout << std::endl;
    return 0;
}

