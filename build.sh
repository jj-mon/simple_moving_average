rm -R build
mkdir build
cd build
cmake ..
cmake --build .

./src/simple_moving_average
