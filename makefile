CC=g++
IDIR=/usr/local/include
CFLAGS:=-I$(IDIR) -std=c++11
SRCS=$(wildcard src/*.cc)
OBJS=${SRCS:.cc=.o}

all: test

test: $(OBJS)
	$(CC) $(CFLAGS) -o test $(OBJS) -lpthread -lgtest

%.o: %.c
	$(CC) -c $^ -o $@ $(CFLAGS)

run:
	./test

clean:
	rm src/*.o test