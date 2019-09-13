#include <stdio.h>
#include <stdlib.h>

/*
Uzupe³nij poni¿sz¹ definicjê funkcji w taki sposób, aby wype³nia³a ona napis przekazany
przez parametr text kodem ostatniego znaku tego napisu
*/
void last_char ( char text[] )
{
	int i;
	int x;
	for(i = 0; text[i]!=0; i++);
	for(x = 0; text[x]!=0; x++) { text[x]=text[i-1]; }
}
int main(int argc, char *argv[]) {

	char napis[10]= "abcde";

	printf("%s\n", napis);

	last_char(napis);
	printf("%s\n", napis);
	return 0;
}

