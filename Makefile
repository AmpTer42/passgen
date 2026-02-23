CXX = g++
CC = gcc
CXXFLAGS = -std=c++11 -Wall -Wextra -O2
CFLAGS = -std=c99 -Wall -Wextra -O2

all: passgen passgen_c

passgen: passgen.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

passgen_c: passgen.c
	$(CC) $(CFLAGS) -o $@ $<

install: passgen passgen_c
	install -m 755 passgen passgen_c /usr/local/bin

clean:
	rm -f passgen passgen_c