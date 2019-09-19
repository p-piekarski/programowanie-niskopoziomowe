#include <stdio.h>
#include <stdlib.h>

/*
	Uzupełnij poniższą definicję funkcji tak, żeby tworzyła w dynamicznie
    zalokowanym obszarze pamięci tablicę dla trzech wartości typu int, przekazanych
    przez parametry Proszę pokazać przykład wywołania tej funkcji.
 */

	int *alokacja(int a, int b, int c){
	int *ptr;

	ptr = malloc(sizeof(int)*3);
	ptr[0] = a;
	ptr[1] = b;
	ptr[2] = c;

	return ptr;
	}


int main(int argc, char *argv[]) {

	int *andrzej;

	andrzej = alokacja(4,3,2);

	printf("andrzej here %d", *andrzej);


	return 0;
}
