set(moving_average_SOURCE
        ${CMAKE_CURRENT_SOURCE_DIR}/moving_average/moving_average.cpp
)

add_executable(${PROJECT_NAME}
        ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
        ${moving_average_SOURCE}
)