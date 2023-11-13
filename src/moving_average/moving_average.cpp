#include "moving_average.h"

template<typename T>
std::vector<T> templateCalcMovingAverage(const std::vector<T> &data, size_t windowSize) {
    if (data.size() < windowSize) {
        std::cerr << "can't calculate simple moving average. there is not enough data.\n";
        return {};
    }

    std::vector<T> movingAverageVector;

    T sum = 0;

    for (size_t i = 0; i < windowSize; i++) {
        sum += data[i];
    }

    movingAverageVector.push_back(sum/windowSize);

    for (size_t i = windowSize; i < data.size(); i++) {
        sum = sum - data[i - windowSize] + data[i];
        movingAverageVector.push_back(sum/windowSize);
    }

    return std::move(movingAverageVector);
}

std::vector<float> CalcMovingAverage(const std::vector<float> &data, size_t windowSize) {
    return templateCalcMovingAverage(data, windowSize);
}

std::vector<double> CalcMovingAverage(const std::vector<double> &data, size_t windowSize) {
    return templateCalcMovingAverage(data, windowSize);
}