#rm -rf llvm 
#rm -rf build
name=$1
addr="http://clang${name}:clang${name}!clang${name}!@PowerEdge-M640-Blade-8/clang${name}/llvm.git"
git clone $addr
mkdir -p build && cd build
export CC=/usr/bin/gcc && export CXX=/usr/bin/g++
cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug ../llvm
make -j72
cd ./tools/clang/examples/TraverseFunctionDecls && make -j72
cd ../../../../..
./build/bin/clang -cc1 -load ./build/lib/TraverseFunctionDecls.so -plugin traverse-fn-decls ./cases/wrong.c
./build/bin/clang -cc1 -load ./build/lib/TraverseFunctionDecls.so -plugin traverse-fn-decls ./cases/right.c
rm -rf build
