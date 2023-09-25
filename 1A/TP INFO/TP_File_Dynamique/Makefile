test1 : element.c element.h file_dynamique.c file_dynamique.h progTestFILE.c
	gcc -c element.c
	gcc -c file_dynamique.c
	gcc -c progTestFILE.c
	gcc -o progTestFILE.out element.o file_dynamique.o progTestFILE.o 
	./progTestFILE.out

clean :
	rm -rf *.o
