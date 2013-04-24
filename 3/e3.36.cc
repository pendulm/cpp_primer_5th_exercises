#include <iostream>
#include <cstddef>
#include <vector>
#include <iterator>
using std::cout;
using std::endl;
using std::vector;

int main() {
    constexpr size_t count1 = 5;
    constexpr size_t count2 = 5;
    // int a[count1] = {3,2,3,4,5};
    // int b[count2] = {2,2,3,4,5};
    vector<int> a = {3,2,3,4,5};
    vector<int> b = {2,2,3,4,5};

    int result = 0;
    // auto less = (count1 < count2) ? count1 : count2;
    // for (size_t i = 0; i != less; ++i) {
        // result = a[i] - b[i];
        // if(result)
            // break;
    // }
    // if (!result) {
        // result = count1 - count2;
    // }
    // result = iv1 - iv2;
    if (a == b)
        cout << "two array is same" << endl;
    else if (a < b)
        cout << "array1 is smaller" << endl;
    else
        cout << "array1 is bigger" << endl;

    return 0;
}
