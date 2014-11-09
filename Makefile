CC = gcc

INCLUDES =
CFLAGS = -g -Wall $(INCLUDES)

LDFLAGS = -g

LIBS =

SOURCES = jsURLparser.c

OBJECTS = $(SOURCES:.c=.o)

EXECUTABLE = jsURLparser

$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(CFLAGS) $(INCLUDES) -o $(EXECUTABLE) $(OBJECTS) $(LDFLAGS) $(LIBS)

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

.PHONY: clean
clean:
	rm -f *.o $(EXECUTABLE)

.PHONY: all
all: clean $(EXECUTABLE)
