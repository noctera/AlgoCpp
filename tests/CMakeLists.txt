cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

project(algocpp_tests)

add_executable(
	${PROJECT_NAME}
	"main.cpp"
	"TextToBin.cpp"
)

include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v2.13.7
)

FetchContent_MakeAvailable(Catch2)

target_link_libraries(
	${PROJECT_NAME}
	PRIVATE
	AlgoCpp
	Catch2::Catch2
)

add_test(AlgoCppLogSuit ${PROJECT_NAME})