CC=g++
LIBS= -lpthread -lgtest
IDIR=/usr/local/include
CFLAGS:=-Wall -I$(IDIR) -std=c++11
SRCS=$(wildcard src/*.cc)

all: test

test: $(SRCS)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

run:
	./test

clean:
	rm test