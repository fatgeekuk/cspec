TESTS=tests/*.c

tester:: tester.o test_index.o tests/*.c all
	gcc -o $@ $< test_index.o tests/*.o -lm

all:
	make -f Maketests all
	
.c.o:
	gcc -o $@ -g -c -O2 $<
	
tester.o: tester.c Maketests

test_index.o: test_index.c

test_index.c: $(TESTS) build_makefile
	./build_makefile $(TESTS) > Maketests

Maketests: $(TESTS) build_makefile
	./build_makefile $(TESTS) > Maketests
	