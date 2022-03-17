bitwisemenu: major1.o clz.o endian.o rotate.o parity.o 
	gcc -Wall -o bitwisemenu major1.o clz.o endian.o rotate.o parity.o 
major1.o: major1.c major1.h
	gcc -Wall -c -o major1.o major1.c
clz.o: clz.c
	gcc -Wall -c -o clz.o clz.c
endian.o: endian.c
	gcc -Wall -c -o endian.o endian.c
rotate.o: rotate.c
	gcc -Wall -c -o rotate.o rotate.c
parity.o: parity.c
	gcc -Wall -c -o parity.o parity.c
clean:
	rm *.o bitwisemenu
run:
	./bitwisemenu
	