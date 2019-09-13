#include <stdio.h>
#include <stdlib.h>

/*
	Proszê uzupe³niæ poni¿sz¹ definicjê funki tak, ¿eby wyœwietla³a zawartoœæ tablicy wartoœæi
	typu int, przy czym parametrami tej funkcji jest wskaŸnik na pierwszy element i wskaniŸnik
	na ostatni element tablicy. Proszê pokazaæ przyk³ad wywo³ania tej funkcji
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
