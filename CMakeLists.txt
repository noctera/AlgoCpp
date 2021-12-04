cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

project(AlgoCpp
	LANGUAGES CXX
	VERSION 0.0.1
)

find_package( OpenCV REQUIRED )
include(CTest)

SET(ALGOCPP_BUILD_EXAMPLES ON CACHE BOOL "Enables example building" FORCE)
SET(ALGOCPP_BUILD_TESTS ON CACHE BOOL "Enables tests building" FORCE)
SET(ALGOCPP_BUILD_BENCHMARK OFF CACHE BOOL "Enables benchmark building" FORCE)

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


