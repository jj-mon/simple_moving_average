#include <vector>
#include <iostream>
#include <chrono>
#include <random>

#include "moving_average/moving_average.h"

template<typename T>
double MeasurePerformance(const std::vector<T> &data, size_t windowSize) {
    auto start = std::chrono::high_resolution_clock::now();

    auto result = CalcMovingAverage(data, windowSize);

    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> executionTime = end - start;

    return data.size()/executionTime.count();
}

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_real_distribution<double> dis(1.0, 5.0);

    size_t inputDataSize = 1000000;

    std::vector<float>  inputFloatVector;
    std::vector<double> inputDoubleVector;

    for (size_t i = 0; i < inputDataSize; i++) {
        double randomValue = dis(gen);
        inputFloatVector.push_back(static_cast<float>(randomValue));
        inputDoubleVector.push_back(randomValue);
    }

    std::vector<size_t> windowSizes{4, 8, 16, 32, 64, 128};
    for (auto windowSize : windowSizes) {
        std::cout << "FLOAT:\twindow size: " << windowSize << "  \t" << MeasurePerformance(inputFloatVector, windowSize) << " (counts/sec)\n";
        std::cout << "DOUBLE:\twindow size: " << windowSize << "  \t" << MeasurePerformance(inputDoubleVector, windowSize) << " (counts/sec)\n";
    }

    return 0;
}