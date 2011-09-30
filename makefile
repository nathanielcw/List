CC=g++
CFLAGS=-c -Wall
LFLAGS=-o 

all:	main.o
	$(CC)  List.o SLListTest.o $(LFLAGS) ssltest
list.o:
	$(CC) $(CFLAGS) src/List.cpp
main.o:	list.o
	$(CC) $(CFLAGS) src/SLListTest.cpp


