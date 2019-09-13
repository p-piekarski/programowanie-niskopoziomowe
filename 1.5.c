/*
Uzupe³nij poni¿sz¹ definicjê funkcji w taki sposób, aby zwraca³¹ ona wskaŸnik na pierwszy element
o wartoœci 0 w tablicy wartoœci typu int, przekazanej odpowiednio przez parametry, lub wskaŸnik pusty
(NULL) w przypadku braku takiego elementu w tablicy.
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int* wskaznik0(int pempuszek[])
	{
		int i = 0;
		for(; pempuszek[i]!=0; i++);    /// Zwróæ uwagê na warunek
		int* p;    // WskaŸnik wbija na rejon
		if(i==5)
		{
			p=NULL;
		}
		else
		{
			p=&pempuszek[i];
		}
		return p;
	}

	int chybasieudalo[] = { 1, 2, 3, 0, 5};
	printf("%d",wskaznik0(chybasieudalo));
	return 0;
}
