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
    for(auto iter = v1.cbegin(); iter != v1.cend(); ++iter)
        cout << *iter << " ";
    cout << endl << "-------------" << endl;

    cout << v2.size() << endl;
    for(auto iter = v2.cbegin(); iter != v2.cend(); ++iter)
        cout << *iter << " ";
    cout << endl << "-------------" << endl;

    cout << v3.size() << endl;
    for(auto iter = v3.cbegin(); iter != v3.cend(); ++iter)
        cout << *iter << " ";
    cout << endl << "-------------" << endl;

    cout << v4.size() << endl;
    for(auto iter = v4.cbegin(); iter != v4.cend(); ++iter)
        cout << *iter << " ";
    cout << endl << "-------------" << endl;

    cout << v5.size() << endl;
    for(auto iter = v5.cbegin(); iter != v5.cend(); ++iter)
        cout << *iter << " ";
    cout << endl << "-------------" << endl;

    cout << v6.size() << endl;
    for(auto iter = v6.cbegin(); iter != v6.cend(); ++iter)
        cout << *iter << " ";
    cout << endl << "-------------" << endl;

    cout << v7.size() << endl;
    for(auto iter = v7.cbegin(); iter != v7.cend(); ++iter)
        cout << *iter << " ";
    cout << endl << "-------------" << endl;
    return 0;
}

