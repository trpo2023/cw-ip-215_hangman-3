#pragma once
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

void youlose(RenderWindow& window, string line, int x, int y, Font font);
void youwin(RenderWindow& window, string line, int x, int y, Font font);