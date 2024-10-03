// Use this main to test your code.
// It will not be marked
#include <iostream>

#include "loadingBar.hpp"

int main() {
    try {
        loadingBar(5);
    } catch (const std::invalid_argument& e) {
        std::cout << e.what() << '\n';
    }
    return 0;
}
