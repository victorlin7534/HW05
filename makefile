default: strTest.o strFunc.o
	gcc -o test strTest.o strFunc.o

strFunc.o: strFunc.c strFunc.h
	gcc -c strFunc.c

strTest.o: strTest.c strFunc.h
	gcc -c strTest.c

run:
	./test

clean:
	rm -f *.o *.out *.exe 