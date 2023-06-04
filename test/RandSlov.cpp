#include "../src/RandSlov.hpp"
#include "../src/ZagSlov.hpp"
#include "../src/checkletter.hpp"
#include "../src/game_result.hpp"
#include "../src/ChooseDiff.hpp"
#include "../thirdparty/ctest.h"

CTEST(RandSlov, difficulty0){
    RandSlov(RenderWindow& window, bool Arr[], 0, 0, 1080, 1920, alphabet, font);
}