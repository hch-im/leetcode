CC=g++
IDIR=/usr/local/include
CFLAGS:=-I$(IDIR)
SRCS=$(wildcard src/*.cc)
OBJS=${SRCS:.cc=.o}

all: test

test: $(OBJS)
	$(CC) -o test $(OBJS) -lpthread -lgtest

%.o: %.c
	$(CC) -c $^ -o $@ $(CFLAGS)

run:
	./test

clean:
	rm src/*.o test