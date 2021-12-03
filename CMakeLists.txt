cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

project(AlgoCpp
	LANGUAGES CXX
	VERSION 0.0.1
)

find_package( OpenCV REQUIRED )
include(CTest)

option(ALGOCPP_BUILD_EXAMPLES "Enables example building" ON)
option(ALGOCPP_BUILD_TESTS "Enables tests building" ON)

add_library(${PROJECT_NAME} INTERFACE)

target_include_directories(
	${PROJECT_NAME}
	INTERFACE
	${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(
	${PROJECT_NAME}
	INTERFACE
	cxx_std_17
)

if (ALGOCPP_BUILD_EXAMPLES)
	set(ExamplesDir "${CMAKE_CURRENT_SOURCE_DIR}/examples/")
	add_subdirectory(${ExamplesDir})
endif()

if (ALGOCPP_BUILD_TESTS)
	set(TestsDir "${CMAKE_CURRENT_SOURCE_DIR}/tests/")
	add_subdirectory(${TestsDir})
endif()


