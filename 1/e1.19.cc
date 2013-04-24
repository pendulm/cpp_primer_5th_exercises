#include <iostream>

int main() {
    int left = 0, right = 0;
    int tmp;
    std::cin >> left >> right;
    if (left > right) {
        tmp = left;
        left = right;
        right = tmp;
    }
    while (left <= right) {
        std::cout << left << std::endl;
        left++;
    }
    return 0;
}
