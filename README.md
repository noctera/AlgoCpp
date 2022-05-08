# AlgoCpp

This is my repository with self implemented algorithms, written in C++.<br/>Currently available algorithms:

```
└── algorithms
    ├── search
    │   └── linear search
    └── sorting
        └── bubblesort
```

## Example

```cpp
// single header include
#include <AlgoCpp/algorithms.hpp>
#include <iostream>

int main() {
    std::vector<int> foo{1, 4, 5, 2, 3};
    // check if int is in vector with lenear search
    if (algocpp::search::linearSearch(foo, 2)) {
        std::cout << "found" << std::endl;
    }
}
```

## Requirements

- C++17 compatible compiler

## Installation via Cmake

```cmake
cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

project(<your_project_name>)

include(FetchContent)

FetchContent_Declare(
	AlgoCpp
	GIT_REPOSITORY	https://github.com/noctera/AlgoCpp.git
	GIT_TAG		origin/main
)
FetchContent_MakeAvailable(AlgoCpp)

target_link_libraries(
	<your_target_name>
	PUBLIC AlgoCpp
)
```

## Build the project

### Build everything at once

```bash
cmake -S all -B build
cmake --build build

# docs need to be generated seperately
cmake --build build/docs --target docs
```

### Build only the examples

```bash
cmake -S examples -B build/examples
cmake --build build/examples
```

### Build only the tests

```bash
cmake -S tests -B build/tests
cmake --build build/tests
```

### Build only the docs

```bash
cmake -S docs -B build/docs
cmake --build build/docs --target docs
```

### Format the code

```bash
cmake -S all -B build
cmake --build build --target fix-format
```
