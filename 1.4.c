#include <stdio.h>
#include <stdlib.h>
/*
Uzupe³nij poni¿sz¹ definicjê funkcji tak, aby tworzy³a w dynamicznie zaalokowanym
obszarze pamiêci oraz udostêpni³a napis, który jest kopi¹ pierwszego s³owa na napisu
przekazanego jako parametr
*/
int main(int argc, char *argv[]) {


	char* word1(char txt[]        ){

		char* x;
		int i = 0;
		printf("%s \n",txt); //"Jan uszc ebula"
		for(; txt[i]!=' '; i++);
		x = malloc(i-1);         // Zapamiêtaj! Malloc mo¿e byæ tablic¹
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

	printf("%s",word1(tab));   //Kopia pierwszego s³owa "Jan"





	return 0;
}
