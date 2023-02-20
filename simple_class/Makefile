all: main

class.o: class.cpp class.h
	g++ -c class.cpp

main: main.cpp class.o
	g++ main.cpp class.o -o main

clean:
	rm -f *.o *~ main
