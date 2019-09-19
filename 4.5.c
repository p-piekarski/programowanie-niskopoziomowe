#include <stdio.h>
#include <stdlib.h>

/*
	Proszę uzupełnić poniższą definicję funki tak, żeby wyświetlała zawartość
    tablicy wartości typu int, przy czym parametrami tej funkcji jest wskaźnik
    na pierwszy element i wskaniźnik na ostatni element tablicy.
    Proszę pokazać przykład wywołania tej funkcji
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
