CFLAGS = -g -Wall -v

all:
	g++ main.cpp $(CFLAGS) -o main

clean:
	rm main
