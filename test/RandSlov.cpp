#include "../src/RandSlov.hpp"
#include "../thirdparty/ctest.h"

CTEST(RandSlov, difficulty0){
    bool Arr[26];
    string line;
    RandSlov(Arr, 0, line);
    ASSERT_EQUAL(7, line.length());
}

CTEST(RandSlov, difficulty1){
    bool Arr[26];
    string line;
    RandSlov(Arr, 1, line);
    ASSERT_EQUAL(6, line.length());
}

CTEST(RandSlov, difficulty2){
    bool Arr[26];
    string line;
    RandSlov(Arr, 2, line);
    ASSERT_EQUAL(5, line.length());
}