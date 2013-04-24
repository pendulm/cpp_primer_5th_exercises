#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

int main() {
    string hello = "Hello World";
    for (auto &c : hello) {
        c = 'X';
    }
    std::cout << hello << std::endl;
    return 0;
}

