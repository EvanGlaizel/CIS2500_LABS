lab1_output: lab1A.o lab1B.o lab1Main.o
	gcc -Wall lab1A.o lab1B.o lab1Main.o -o lab1_output

lab1A.o: lab1A.c lab1.h
	gcc -std=c99 -Wall -c lab1A.c

lab1B.o: lab1B.c lab1.h
	gcc -std=c99 -Wall -c lab1B.c

lab1Main.o: lab1Main.c lab1.h
	gcc -std=c99 -Wall -c lab1Main.c

clean:
	rm *.o lab1_output