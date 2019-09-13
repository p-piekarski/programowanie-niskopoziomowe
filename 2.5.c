#include <stdio.h>
#include <stdlib.h>

/*
	Uzupe³nij poni¿sz¹ definicjê funki w taki sposób, aby tworzy³a i udostêpni³a
	ona kopiê zmiennej typu double, przekazanej jako parametr, w dynamicznie zaalokowanym
	obszarze pamiêci, a nastêpnie podaæ przyk³ad jej wywo³ania, wyswietliæ wartoœæ kopii
	i zapobiec wyciekowu pamiêci.
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
