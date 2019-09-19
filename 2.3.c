#include <stdio.h>
#include <stdlib.h>

/*
	Jaka będzie zawartość tablicy a po wykonaniu poniższego
    fragmentu programu, jeśli funkcja wartosc zdefiniowana jest następująco:
 */


int wartoscA(int x)
{
    int v = 2;
    v++;
    x += v;
    return x;
}

int wartoscB(int x)
{
    static int v = 2;
    v++;
    x += v;
    return x;
}

int main(int argc, char const *argv[])
{
    printf("A\na[0]:%d\n", wartoscA(1)); // 4
    printf("a[1]:%d\n", wartoscA(2));     // 5
    printf("a[2]:%d\n\n", wartoscA(3));     // 6
    printf("B\na[0]:%d\n", wartoscB(1)); // 4
    printf("a[1]:%d\n", wartoscB(2));     // 6
    printf("a[2]:%d\n", wartoscB(3));     // 8

    return 0;
}
