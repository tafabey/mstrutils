CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJS = mstrutils.o
TARGET = libmstr.so
PREFIX ?= $(HOME)/.local/

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -shared $(OBJS) -o $(TARGET)

mstrutils.o: mstrutils.c mstrutils.h
	$(CC) $(CFLAGS) -c -fPIC mstrutils.c -o mstrutils.o

clean:
	rm -f $(TARGET) $(OBJS)

install: $(TARGET)
	mkdir -p $(PREFIX)/lib
	mkdir -p $(PREFIX)/include
	install -m 755 $(TARGET) $(PREFIX)/lib/
	install -m 644 mstrutils.h $(PREFIX)/include/

uninstall:
	rm -f $(PREFIX)/lib/$(TARGET)
	rm -f $(PREFIX)/include/mstrutils.h

.PHONY: all clean install uninstall
