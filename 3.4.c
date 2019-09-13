#include <stdio.h>
#include <stdlib.h>

/*
	Poni�sza funkcja s�u�y do wyprowadzania na wyj�cie(wy�wietlania) jednego znaku, wskazanego
	przez parametr. Prosz� poda� przyk�ad jej u�ycia(wywo�ania) w celu wyprowadzenia na wyj�cie
	znak�w od po�owy d�ugo�ci do ko�ca napisu zdefiniowanego w funkcji main, identyfikowanego
	przez n1. Prosz� unika� korzystania z funkcji standardowych biblioteki j�zyka C
	do obs�ugi napis�w
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
