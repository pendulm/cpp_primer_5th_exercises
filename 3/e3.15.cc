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
    string i;
    vector<string> iv;
    while(cin >> i) {
        iv.push_back(i);
    }
    for(auto e : iv)
        cout << e;
    cout << endl;
    return 0;
}

