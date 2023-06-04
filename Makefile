all:
	make bin/main
	make run

run:
	./bin/main

bin/main: build/src/main.o build/src/checkletter.o build/src/ChooseDiff.o build/src/game_result.o build/src/RandSlov.o build/src/ZagSlov.o
	g++ -Wall -o $@ $^ -lsfml-system -lsfml-window -lsfml-graphics

build/src/%.o: src/%.cpp
	g++ -Wall -c -o $@ $<

bin/test: build/test/main.o build/test/RandSlov.o build/src/RandSlov.o
	g++ -Wall -o $@ $^
	./bin/test

build/test/%.o: test/%.cpp
	g++ -Wall -c -o $@ $<

clean:
	rm -f build/test/* build/src/* bin/* | grep -v .keep