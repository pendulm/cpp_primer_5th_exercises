#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

int main() {
    string hello = "Hello World";
    // decltype(hello[0]) c;
    // decltype(hello.size()) index = 0;
    // while (index < hello.size()) {
        // hello[index] = 'X';
        // ++index;
    // }
    for (decltype(hello.size()) i = 0;
            i < hello.size(); ++i) {
        hello[i] = 'X';
    }
    std::cout << hello << std::endl;
    return 0;
}

