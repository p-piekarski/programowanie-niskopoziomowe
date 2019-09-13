#include <stdio.h>
#include <stdlib.h>

/*
	Uzupe�nij poni�sz� definicj� funki w taki spos�b, aby tworzy�a i udost�pni�a
	ona kopi� zmiennej typu double, przekazanej jako parametr, w dynamicznie zaalokowanym
	obszarze pami�ci, a nast�pnie poda� przyk�ad jej wywo�ania, wyswietli� warto�� kopii
	i zapobiec wyciekowu pami�ci.
 */


double *kopia(double x)
{
    double *kopiowana = (double *)malloc(sizeof(double));
    *kopiowana = x;
    return kopiowana;
}

int main()
{
    double zmienna = 2.7;
    double *skopiowana = kopia(zmienna);
    printf("%lf == %lf\n", zmienna, *skopiowana);
    free(skopiowana);
    return 0;
}
