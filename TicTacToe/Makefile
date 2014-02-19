all: output

output: Grid.o main.o Player.o
	g++ Grid.o main.o Player.o -o output

Grid.o: Grid.cpp Grid.h
	g++ -c Grid.cpp

main.o: main.cpp
	g++ -c main.cpp

Player.o: Player.cpp Player.h
	g++ -c Player.cpp

clean:
	rm -rf *o output