#include "checkletter.hpp"

int r = 0;

void checkletter(char c, string &line, RenderWindow& window, int &mistake, int x, int y, Font font, int Difficulty, bool Arr[], string alphabet){
	bool Flag = false;
	for(int i = 0; i < line.length(); i++){
		if(line[i] == c){
			Flag = true;
			r++;
		}
	}
	if(Flag == false){
		mistake++;
	}
	if(mistake == 8){
		youlose(window, line, x, y, font);
	}
	if(r == line.length()){
		youwin(window, line, x, y, font);
	}
}