#include "RandSlov.hpp"

void RandSlov(RenderWindow& window, bool Arr[], int mistake, int Difficulty, int y, int x, string alphabet, Font font){
	int a = rand()%100+1;
	for(int i = 0; i < 26; i++){
		Arr[i] = false;
	}
	string line;
	string difFileName = "src/resources/diff" + to_string(Difficulty + 1) + ".txt";
	ifstream difFile(difFileName);
	if(difFile.is_open()){
		for(int i = 0; i < a; i++){
			getline(difFile, line);
		}
	}
	ZagSlov(window, line, mistake, Difficulty, y, x, Arr, alphabet, font);
}