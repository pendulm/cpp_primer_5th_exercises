#include <vector>
#include <iostream>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
    int i = 0;
    vector<int> iv;
    while(cin >> i) {
        iv.push_back(i);
    }
    for(auto e : iv)
        cout << e;
    cout << endl;
    return 0;
}

