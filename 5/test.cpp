#include <iostream>

int main() {
    for (auto &i : {1, 2, 3,4,5}) {
        i +=1;
        std::cout << i << std::endl;
	
    }
    return 0;
}
