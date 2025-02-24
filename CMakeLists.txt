cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

# Главный исполняемый файл
file(GLOB SOURCES "src/*.cpp")
add_executable(MyProject ${SOURCES})

# Подключаем Catch2
include(FetchContent)
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v3.5.3
)
FetchContent_MakeAvailable(Catch2)

# Собираем тесты (обязательно добавляем реализацию sum.cpp и math_utils.cpp!)
file(GLOB TEST_SOURCES "tests/*.cpp")
add_executable(run_tests ${TEST_SOURCES} src/sum.cpp src/code_wors.cpp src/animal.cpp)

# Линкуем тесты с Catch2
target_link_libraries(run_tests PRIVATE Catch2::Catch2WithMain)

# Добавляем команду для тестирования
enable_testing()
add_test(NAME MyTests COMMAND run_tests)


