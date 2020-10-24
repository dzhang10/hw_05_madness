
main.o: mem.c
	gcc -o program mem.c

run:
	./program

clean: 
	*.o
