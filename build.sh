rm -R build

mkdir build
cd build

cmake ..
cmake --build .

cd tests
ctest .