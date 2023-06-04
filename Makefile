all:
	make bin/main
	make run

run:
	./bin/main

bin/main:build/main.o build/checkletter.o build/ChooseDiff.o build/game_result.o build/RandSlov.o build/ZagSlov.o
	g++ -Wall -o $@ $^ -lsfml-system -lsfml-window -lsfml-graphics

build/%.o:src/%.cpp
	g++ -Wall -c -o $@ $<