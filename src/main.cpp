#include <vector>
#include <iostream>

#include "moving_average/moving_average.h"

int main() {
    std::vector<double>      inputData{10, 15, 20, 25, 30, 35, 40, 45, 40, 35};

    std::vector<double>      outputData = CalcMovingAverage(inputData, 4);

    for (auto value : outputData) {
        std::cout << value << " ";
    }
    std::cout << "\n";

    return 0;
}