CFLAGS = -std=c99 -Wall -Werror -pedantic
CC = gcc

ifeq ($(mode), debug)
	CFLAGS += -g3
endif

ifeq ($(mode), release)
	CFLAGS += -DNDEBUG -g0
endif

%.o: %.c *.h
	$(CC) $(CFLAGS) -c $< 	

clean:
	del *.o *.exe
	
app.exe: main.o
	$(CC) $(CFLAGS) -o $@ $^
