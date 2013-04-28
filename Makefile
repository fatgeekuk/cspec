BIN=bin/
SRC=src/*.c
HEADERS=headers/*.h
OBJS=*.o

tests: $(HEADERS) $(SRC)
	make -C unit clean
	make -C unit tester >/dev/null
	unit/tester	

.c.o:
	gcc -o $@ -g -c -O2 $<


