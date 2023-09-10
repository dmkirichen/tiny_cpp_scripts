#include <iostream>

int main() {
    int n;
    std::cout << "How long are we working?" << std::endl;
    std::cin >> n;
    for (int i = 1; i<n+1; i++) {
        if (i % 15 == 0) {
            std::cout << "fizzbuzz" << std::endl;
        } else if (i % 5 == 0) {
            std::cout << "buzz" << std::endl;
        } else if (i % 3 == 0) {
            std::cout << "fizz" << std::endl;
        } else {
            std::cout << i << std::endl;
        } 
    }
}