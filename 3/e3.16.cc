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
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    cout << v1.size() << endl;
    for(auto e : v1)
        cout << e << " ";
    cout << endl << "-------------" << endl;

    cout << v2.size() << endl;
    for(auto e : v2)
        cout << e << " ";
    cout << endl << "-------------" << endl;

    cout << v3.size() << endl;
    for(auto e : v3)
        cout << e << " ";
    cout << endl << "-------------" << endl;

    cout << v4.size() << endl;
    for(auto e : v4)
        cout << e << " ";
    cout << endl << "-------------" << endl;

    cout << v5.size() << endl;
    for(auto e : v5)
        cout << e << " ";
    cout << endl << "-------------" << endl;

    cout << v6.size() << endl;
    for(auto e : v6)
        cout << e << " ";
    cout << endl << "-------------" << endl;

    cout << v7.size() << endl;
    for(auto e : v7)
        cout << e << " ";
    cout << endl << "-------------" << endl;
    return 0;
}

