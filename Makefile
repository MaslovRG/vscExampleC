CFLAGS = -std=c99 -Wall -Werror -pedantic
CC = gcc
EXT = .exe

ifeq ($(mode), debug)
	CFLAGS += -g3
endif

ifeq ($(mode), release)
	CFLAGS += -DNDEBUG -g0
endif

app$(EXT): main.o mysum.o
	$(CC) $(CFLAGS) -o $@ $^

test$(EXT): test.o mysum.o
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c *.h
	$(CC) $(CFLAGS) -c $< 	

clean:
	rm *.o *.exe
	del *.o *.exe
	

