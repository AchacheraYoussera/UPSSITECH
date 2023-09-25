test1 : element.c element.h file_dynamique.c file_dynamique.h application.c
	gcc -c element.c
	gcc -c file_dynamique.c
	gcc -c application.c
	gcc -o application.out element.o file_dynamique.o application.o 
	./application.out

clean :
	rm -rf *.o
