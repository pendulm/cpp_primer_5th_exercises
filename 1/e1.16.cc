#include <iostream>

int main() {
    int sum = 0;
    for(int val = 0; std::cin >> val;) {
        sum += val;
    }
    std::cout << "the sum is " << sum << std::endl;
    return 0;
}
