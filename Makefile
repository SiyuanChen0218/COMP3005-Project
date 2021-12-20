all: main

main: main.o Control.o View.o
	g++ -o main main.o Control.o View.o

main.o: main.cc Control.h View.h
	g++ -c main.cc

Control.o:	Control.h Control.cc
	g++ -c Control.cc

View.o:	View.h View.cc
	g++ -c View.cc

clean:
	rm -f main *.o