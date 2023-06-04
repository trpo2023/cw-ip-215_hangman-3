#include "checkletter.hpp"

void checkletter(char c, string &line, int &mistake, int &r){
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
}