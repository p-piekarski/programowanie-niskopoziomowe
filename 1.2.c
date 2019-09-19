#include <stdio.h>
#include <stdlib.h>



/*
Tablice a oraz zmienne p,q i r zdefiniowano w ramce z prawej strony. Jaka będzie
zawartość tablicy po wykonaniu podanego tam fragmentu kodu programu?
*/

int main()
{




	int a[7] = {1,1,1,1,1,1};
	int *p = a;
	int *q = a+1;
	int *r = a+6;
	q[1] = 4;
	p++;
	*p = 7;
	p[2] = 2;
	r--;
	*r = 3;
	*a = 5;

	printf("a[0] %d\n", a[0]);
	printf("a[1] %d\n", a[1]);
	printf("a[2] %d\n", a[2]);
	printf("a[3] %d\n", a[3]);
	printf("a[4] %d\n", a[4]);
	printf("a[5] %d\n", a[5]);

	printf("p %d\n", *p);
	printf("q %d\n", *q);
	printf("r %d\n", *r);




}

