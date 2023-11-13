enable_testing()

add_executable(test_moving_average
        ${CMAKE_CURRENT_SOURCE_DIR}/test_moving_average.cpp
        ${CMAKE_SOURCE_DIR}/src/moving_average/moving_average.cpp
)

add_test(NAME TestMovingAverage COMMAND test_moving_average)