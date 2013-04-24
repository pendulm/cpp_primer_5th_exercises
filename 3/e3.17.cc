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
    string word;
    vector<string> sv;
    while (cin >> word) {
        for (auto &c : word)
            toupper(c);
        sv.push_back(word);
    }
    decltype(sv.size()) i;
    for (i = 0; i < sv.size(); ++i) {
        cout << sv[i];
        if ((i+1) % 8 == 0)
            cout << endl;
        else
            cout << " ";
    }
    if (i % 8 != 0)
        cout << endl;
    return 0;
}

