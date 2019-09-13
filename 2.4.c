#include <stdio.h>
#include <stdlib.h>

/*
Uzupe³nij poni¿sz¹ definicjê funkcji tak, aby zmienna typu long identyfikowana przez
pierwszy parametr --- x ---- mia³a nadan¹ wartoœæ drugiego parametru ---- y -----.
Proszê podaæ przyk³ad jej wywo³ania w celu nadania zmiennej a wartoœci zmiennej b.
 */



void przypisz(long *x, long y)
{
    *x = y;
}

int main()
{
    long a;
    long b = 3;
    przypisz(&a, b);
    printf("%ld\n", a);
    return 0;
}
