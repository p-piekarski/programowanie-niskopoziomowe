#include <stdio.h>
#include <stdlib.h>

/*
Uzupe�nij poni�sz� definicj� funkcji tak, aby zmienna typu long identyfikowana przez
pierwszy parametr --- x ---- mia�a nadan� warto�� drugiego parametru ---- y -----.
Prosz� poda� przyk�ad jej wywo�ania w celu nadania zmiennej a warto�ci zmiennej b.
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
