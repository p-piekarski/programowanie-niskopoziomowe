#include <stdio.h>
#include <stdlib.h>

/*
	Uzupe³nij poni¿sz¹ definicjê funkcji tak, ¿eby tworzy³a w dynamicznie zalokowanym
	obszarze pamiêci tablicê dla trzech wartoœci typu int, przekazanych przez parametry
	Proszê pokazaæ przyk³ad wywo³ania tej funkcji.

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
