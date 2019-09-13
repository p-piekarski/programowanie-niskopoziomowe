#include <stdio.h>
#include <stdlib.h>

/*
	Uzupe�nij poni�sz� definicj� funkcji tak, �eby tworzy�a w dynamicznie zalokowanym
	obszarze pami�ci tablic� dla trzech warto�ci typu int, przekazanych przez parametry
	Prosz� pokaza� przyk�ad wywo�ania tej funkcji.

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
