#include <stdio.h>
#include <stdlib.h>

/*
Tablice a oraz zmienne p,q i r zdefiniowano w ramce z prawej strony. Jaka bedzie wartosc
nastepujacych wyrazen, jesli poczatek tablicy a znajduje sie w pamieci pod adresem 30 000
 */


int main(int argc, char const *argv[])
{
    int a[5] = {1, 5, 2, 4, 3};
    int *p = a;
    int *q = a + 1;
    int *r = q + 2;

    printf("%d\n", *a);   // 1
    printf("%d\n", *p);   // 1
    printf("%d\n", *q);   // 5
    printf("%d\n", *r);   // 4
    printf("%d\n", p[2]); // 2
    printf("%d\n", q[1]); // 2

    return 0;
}
