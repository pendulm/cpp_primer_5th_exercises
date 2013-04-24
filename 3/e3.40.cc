#include <iostream>
#include <cstddef>
#include <vector>
#include <iterator>
#include <cstring>
using std::cout;
using std::endl;
using std::vector;

int main() {
    char str1[] = "hello";
    char str2[] = "world";
    char str3[sizeof(str1) + sizeof(str2) + 1];
    std::strcpy(str3, str1);
    std::strcat(str3, " ");
    std::strcat(str3, str2);
    std::strcat(str3, "$");
    char *p = str3;
    while (*p) {
        cout << *p;
        ++p;
    }
    cout << endl;
    return 0;
}
