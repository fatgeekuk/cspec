BIN=bin/
SRC=src/*.c
HEADERS=headers/*.h
OBJS=*.o

tests: $(HEADERS) $(SRC)
	rm unit/teste? || ls
	make -C unit tester >/dev/null
	unit/tester	

.c.o:
	gcc -o $@ -g -c -O2 $<


