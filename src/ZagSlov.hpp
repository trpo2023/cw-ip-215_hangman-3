#pragma once
#include "checkletter.hpp"
#include "game_result.hpp"
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

void ZagSlov(RenderWindow& window, string &line, int &mistake, int &r, int Difficulty, int y, int x, bool Arr[], string alphabet, Font font);