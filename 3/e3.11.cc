#include <string>
#include <iostream>
#include <cctype>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::ispunct;

int main() {
    const string s = "Keep out!";
    for (auto &c : s) {
        c = 'X';
    }
    return 0;
}

