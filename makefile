OBJS = main.o Assembler.o linked_list.o preassembler.o 
Assembler: $(OBJS)
	gcc -g -ansi -Wall -pedantic $(OBJS) -o Assembler


main.o: main.c
	gcc -c -ansi -Wall -pedantic main.c -o main.o

linked_list.o: linked_list.c linked_list.h
	gcc -c -ansi -Wall -pedantic linked_list.c -o linked_list.o

preassembler.o: preassembler.c preassembler.h 
	gcc -c -ansi -Wall -pedantic preassembler.c -o preassembler.o
	

clean:
	rm -f $(OBJS) Assembler
