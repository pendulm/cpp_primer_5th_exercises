#include <iostream>
#include <vector>
using std::vector;

int main() {
    std::cout << "char : " <<  sizeof (char) << std::endl;
    std::cout << "int : " << sizeof (int) << std::endl;
    std::cout << "long : " << sizeof (long) << std::endl;
    std::cout << "long long : " << sizeof (long long) << std::endl;
    std::cout << "float : " << sizeof (float) << std::endl;
    std::cout << "double : " << sizeof (double) << std::endl;
    std::cout << "long double : " << sizeof (long double) << std::endl;
    std::cout << "int * : " << sizeof (int *) << std::endl;
    return 0;
}
