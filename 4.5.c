#include <stdio.h>
#include <stdlib.h>

/*
	Prosz� uzupe�ni� poni�sz� definicj� funki tak, �eby wy�wietla�a zawarto�� tablicy warto��i
	typu int, przy czym parametrami tej funkcji jest wska�nik na pierwszy element i wskani�nik
	na ostatni element tablicy. Prosz� pokaza� przyk�ad wywo�ania tej funkcji
 */


void printarr(int *first, int *last)
{
    for (; first <= last; first++)
        printf("%d\n", *first);
}

int main(int argc, char const *argv[])
{
    int tab[] = {0, 1, 2, 3, 4, 5, 6};
    int size = sizeof(tab) / sizeof(*tab);
    printarr(tab, tab + size - 1);

    return 0;
}
