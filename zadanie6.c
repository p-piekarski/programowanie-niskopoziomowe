/*
Uzupe�nij poni�sz� definicj� funkcji w taki spos�b, aby zwraca�� ona wska�nik na pierwszy element
o warto�ci 0 w tablicy warto�ci typu int, przekazanej odpowiednio przez parametry, lub wska�nik pusty
(NULL) w przypadku braku takiego elementu w tablicy.
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int* wskaznik0(int pempuszek[])
	{
		int i = 0;
		for(; pempuszek[i]!=0; i++);    /// Zwr�� uwag� na warunek
		int* p;    // Wska�nik wbija na rejon
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
