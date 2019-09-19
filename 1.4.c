#include <stdio.h>
#include <stdlib.h>
/*
Uzupełnij poniższą definicję funkcji tak, aby tworzyła w dynamicznie
zaalokowanym obszarze pamięci oraz udostępniła napis, który jest kopią
pierwszego słowa na napisu przekazanego jako parametr.
*/
int main(int argc, char *argv[]) {


	char* word1(char txt[]        ){

		char* x;
		int i = 0;
		printf("%s \n",txt); //"Jan uszc ebula"
		for(; txt[i]!=' '; i++);
		x = malloc(i-1);         // Zapamiętaj! Malloc może być tablicš
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

	printf("%s",word1(tab));   //Kopia pierwszego słowa "Jan"





	return 0;
}
