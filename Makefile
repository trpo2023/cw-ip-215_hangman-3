all:
	make game
	make run

run:
	./game

game:build/game.o build/checkletter.o build/ChooseDiff.o build/game_result.o build/RandSlov.o build/ZagSlov.o
	g++ -Wall -o game build/game.o build/checkletter.o build/ChooseDiff.o build/game_result.o build/RandSlov.o build/ZagSlov.o -lsfml-system -lsfml-window -lsfml-graphics

build/game.o:game.cpp
	g++ -Wall -c -o build/game.o game.cpp

build/checkletter.o:src/checkletter.cpp
	g++ -Wall -c -o build/checkletter.o src/checkletter.cpp

build/ChooseDiff.o:src/ChooseDiff.cpp
	g++ -Wall -c -o build/ChooseDiff.o src/ChooseDiff.cpp

build/game_result.o:src/game_result.cpp
	g++ -Wall -c -o build/game_result.o src/game_result.cpp

build/RandSlov.o:src/RandSlov.cpp
	g++ -Wall -c -o build/RandSlov.o src/RandSlov.cpp

build/ZagSlov.o:src/ZagSlov.cpp
	g++ -Wall -c -o build/ZagSlov.o src/ZagSlov.cpp