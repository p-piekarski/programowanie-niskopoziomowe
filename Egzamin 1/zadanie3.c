#include <stdio.h>
#include <stdlib.h>

/*
Jaka b�dzie zawarto�� tablicy a po wykonaniu poni�szego fragmentu programu, je�li funkcja
wartosc zdefiniowana jest nast�puj�co
*/

	void wartosc (int *x, int y){
		int v= 5;
	//	static int v= 5;
		y = v;
		v++;
		*x = v;
		
	}

int main(int argc, char *argv[]) {

	int a, b, c, d;
	a = 1;
	b = 2;
	c = 3;
	d = 4;
	wartosc(&a, b);
	wartosc(&c, d);
	
	
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", d);
}
