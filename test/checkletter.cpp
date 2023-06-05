#include "../src/checkletter.hpp"
#include "../thirdparty/ctest.h"

CTEST(checkletter, right){
    char c = 'a';
    string line = "a";
    int mistake = 0, r = 0;
    checkletter(c, line, mistake, r);
    ASSERT_EQUAL(1, r);
}

CTEST(checkletter, mistake){
    char c = 'b';
    string line = "a";
    int mistake = 0, r = 0;
    checkletter(c, line, mistake, r);
    ASSERT_EQUAL(1, mistake);
}