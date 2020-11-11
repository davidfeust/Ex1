all: mymathd mymaths mains maind

#compile main with libs:
mains: main.o libmyMath.a
	gcc -Wall main.o libmyMath.a -o mains

maind: main.o libmyMath.so
	gcc -Wall main.o ./libmyMath.so -o maind

#creats libs:
mymaths: libmyMath.a
libmyMath.a: power.o basicMath.o myMath.h
	ar -rcs libmyMath.a power.o basicMath.o

mymathd: libmyMath.so
libmyMath.so: power.o basicMath.o myMath.h
	gcc -shared -Wall power.o basicMath.o -o libmyMath.so

#compile libs & main:
main.o: main.c myMath.h
	gcc -Wall -c main.c

basicMath.o: basicMath.c myMath.h
	gcc -Wall -c -fPIC basicMath.c

power.o: power.c myMath.h
	gcc -Wall -c -fPIC power.c

.PHONY: clean all mymaths mymathd

clean:
	rm -f *.o *.a *.so mains maind
