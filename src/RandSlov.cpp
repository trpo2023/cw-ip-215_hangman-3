#include "RandSlov.hpp"

void RandSlov(RenderWindow& window, bool Arr[], int &mistake, int Difficulty, int y, int x, string alphabet, Font font, string &line){
	int a = rand()%100+1;
	for(int i = 0; i < 26; i++){
		Arr[i] = false;
	}
	string difFileName = "src/resources/diff" + to_string(Difficulty + 1) + ".txt";
	ifstream difFile(difFileName);
	if(difFile.is_open()){
		for(int i = 0; i < a; i++){
			line = "";
			getline(difFile, line);
		}
	}
}