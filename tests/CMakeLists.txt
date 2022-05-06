cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

project(AlgoCppTests)

# ---- Options ----
option(ALGOCCP_BUILD_BENCHMARK "Enable benchmark" OFF)
option(ENABLE_TEST_COVERAGE "Enable test coverage" OFF)
option(TEST_INSTALLED_VERSION "Test the version found by find_package" OFF)

# --- Import tools ----

include(../cmake/tools.cmake)

# ---- Dependencies ----

if(ALGOCPP_BUILD_BENCHMARK)
	set(BenchmarkFiles "Benchmark.cpp")
endif()

CPMAddPackage("gh:TheLartians/Format.cmake@1.7.0")

add_executable(
	${PROJECT_NAME}
	"main.cpp"
	"sorting/bubbleSort.cpp"
	"search/linearSearch.cpp"
	${BenchmarkFiles}
	
)

CPMAddPackage(
  GITHUB_REPOSITORY catchorg/Catch2
  VERSION 2.13.6
)

target_link_libraries(
	${PROJECT_NAME}
	PRIVATE
	AlgoCpp
	Catch2::Catch2
)

add_test(AlgoCppLogSuit ${PROJECT_NAME})