cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

project(AlgoCppTests)

# ---- Options ----
option(TEST_INSTALLED_VERSION "Test the version found by find_package" OFF)

# ---- Dependencies ----

CPMAddPackage("gh:TheLartians/Format.cmake@1.7.3")

CPMAddPackage(GITHUB_REPOSITORY catchorg/Catch2 VERSION 2.13.6)

if(TEST_INSTALLED_VERSION)
  find_package(AlgoCpp REQUIRED)
else()
  CPMAddPackage(NAME AlgoCpp SOURCE_DIR ${CMAKE_CURRENT_LIST_DIR}/..)
endif()

# ---- Create binary ----

file(GLOB sources CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
     ${CMAKE_CURRENT_SOURCE_DIR}/search/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/sorting/*.cpp
)
add_executable(${PROJECT_NAME} ${sources})
target_link_libraries(${PROJECT_NAME} AlgoCpp::AlgoCpp Catch2::Catch2)
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 17)

add_test(AlgoCppLogSuit ${PROJECT_NAME})
