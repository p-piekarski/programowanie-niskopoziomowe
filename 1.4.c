#include <stdio.h>
#include <stdlib.h>
/*
Uzupe�nij poni�sz� definicj� funkcji tak, aby tworzy�a w dynamicznie zaalokowanym
obszarze pami�ci oraz udost�pni�a napis, kt�ry jest kopi� pierwszego s�owa na napisu
przekazanego jako parametr
*/
int main(int argc, char *argv[]) {


	char* word1(char txt[]        ){

		char* x;
		int i = 0;
		printf("%s \n",txt); //"Jan uszc ebula"
		for(; txt[i]!=' '; i++);
		x = malloc(i-1);         // Zapami�taj! Malloc mo�e by� tablic�
		int j = 0;
		for(; j!=i;)
		{
			x[j]=txt[j];
			j++;
		}
		//printf("%s \n",x);  //"Jan"
		return x;




	}

	char tab[15] = "jan uszc ebula";

	printf("%s",word1(tab));   //Kopia pierwszego s�owa "Jan"





	return 0;
}
