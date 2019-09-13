#include <stdio.h>
#include <stdlib.h>

/*
	Tablic� a oraz zmienne p,q i r zdefiniowano w ramce z prawej strony. Jaka b�dzie warto��
	nast�puj�cych wyra�e�, je�li pocz�tek tablicy a znajduj� sie w pami�ci pod adresem 30 000
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
