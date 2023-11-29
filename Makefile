mat_multiply.out: main.o mat_multiply.o
	gcc -g -Wall -Werror -o mat_multiply.out main.o mat_multiply.o

main.o: main.c mat_multiply.h
	gcc -g -Wall -Werror -c main.c

mat_multiply.o: mat_multiply.c mat_multiply.h
	gcc -g -Wall -Werror -c mat_multiply.c

clean:
	rm -f *.o *.out

run: mat_multiply.out
	./mat_multiply.out
