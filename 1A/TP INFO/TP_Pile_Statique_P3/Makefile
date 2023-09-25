test1 : element.c element.h pile_statique.c pile_statique.h train.c
	gcc -c element.c
	gcc -c pile_statique.c
	gcc -c train.c
	gcc -o train.out element.o pile_statique.o train.o 
	./train.out

clean :
	rm -rf *.o
