#include <stdio.h>
#include <stdlib.h>

/*
	Poni¿sza funkcja s³u¿y do wyprowadzania na wyjœcie(wyœwietlania) jednego znaku, wskazanego
	przez parametr. Proszê podaæ przyk³ad jej u¿ycia(wywo³ania) w celu wyprowadzenia na wyjœcie
	znaków od po³owy d³ugoœci do koñca napisu zdefiniowanego w funkcji main, identyfikowanego
	przez n1. Proszê unikaæ korzystania z funkcji standardowych biblioteki jêzyka C
	do obs³ugi napisów
 */

	void print1znak (char* p){
		printf("%c ", *p);

	}


int main(int argc, char *argv[]) {

	int x;
	char n1[] = "tutajjestnapis";
	printf("Caly napis: %s\n", n1);

	printf("Pierwszy znak napisu: ");
	print1znak(n1);
	printf("\n");

	x = sizeof(n1)/2;
	printf("Size of z X: %d\n", x);

	printf("Wypisanie od polowy: ");
	for(;n1[x]!=0;x++)	{ print1znak(&n1[x]);}
	return 0;
}
