#include "loadingBar.hpp"

#include <iomanip>
#include <iostream>
#include <stdexcept>

void loadingBar(int loads) {
    if (loads < 0) {
        throw std::invalid_argument("Input cannot be non-positive");
    }

    for (int i = 0; i <= loads; i++) {
        double percentage_val;
        if (loads == 0) {
            percentage_val = 100;
            std::cout << "[*] 100.00%" << std::endl;
        }
        else {
            percentage_val = static_cast<double>(i) / loads * 100;
            std::cout << "[";
            std::cout << std::setfill('*') << std::setw(i) << "";
            std::cout << std::setfill(' ') << std::setw(loads + 1 - i) << "]";
            std::cout << std::fixed << std::setprecision(2) << std::setfill(' ') << std::setw(7) <<  percentage_val << "%";

            std::cout << std::endl;
        }

    }
}
