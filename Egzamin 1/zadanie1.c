#include <stdio.h>
#include <stdlib.h>

/*
Jaka będą wartośći zmiennych x1,x2,...,x6 po wykonaniu poniższego fragmentu programu,
przyjmując, że kod ASCII litery A wynosi 65, B - 66 itd, a napis txt umieszczono w pamięci
począwszy od adresu 50 000?
 */


int main(){

	char txt[10] = "AB";
	long x1, x2, x3, x4, x5, x6;
	
	x1 = (long) txt[0];
	x2 = (long) txt[1];
	x3 = (long) txt[2];
	x4 = (long) *txt;
	x5 = (long) txt;
	x6 = (long) (txt+3);
	
	
	
	printf("x1 %d\n", x1);
	printf("x2 %d\n", x2);
	printf("x3 %d\n", x3);
	printf("x4 %d\n", x4);
	printf("x5 %d\n", x5);
	printf("x6 %d\n", x6);
}
