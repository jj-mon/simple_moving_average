#include <cassert>
#include <vector>

#include "../src/moving_average/moving_average.h"

void test_empty_CalcMovingAverage() {
    std::vector<float> inputData;
    size_t windowSize = 4;

    std::vector<float> result = CalcMovingAverage(inputData, windowSize);

    assert(result.empty());
}

void test_data_CalcMovingAverage() {
    std::vector<float>      inputData{10, 15, 20, 25, 30, 35, 40, 45, 40, 35};
    std::vector<float> trueOutputData{17.5, 22.5, 27.5, 32.5, 37.5, 40, 40};
    size_t windowSize = 4;

    std::vector<float> outputData = CalcMovingAverage(inputData, windowSize);

    for (size_t i = 0; i < trueOutputData.size(); i++) {
        assert(outputData[i] == trueOutputData[i]);
    }
}

int main() {
    test_empty_CalcMovingAverage();

    test_data_CalcMovingAverage();

    return 0;
}