#ifndef SIMPLE_MOVING_AVERAGE_MOVING_AVERAGE_H
#define SIMPLE_MOVING_AVERAGE_MOVING_AVERAGE_H

#include <vector>
#include <iostream>

template<typename T>
std::vector<T>      TemplateCalcMovingAverage(const std::vector<T> &data, size_t windowSize);

std::vector<float>  CalcMovingAverage(const std::vector<float> &data, size_t windowSize);
std::vector<double> CalcMovingAverage(const std::vector<double> &data, size_t windowSize);

#endif //SIMPLE_MOVING_AVERAGE_MOVING_AVERAGE_H
