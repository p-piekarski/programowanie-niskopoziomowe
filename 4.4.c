#include <stdio.h>
#include <stdlib.h>

/*
	Poni¿sza funkcja s³u¿y do sumowania elementów tablicy typu float, opisanej przez odpowiednie
	parametry. Proszê podaæ przuk³ad jej u¿ycia (wywo³ania) w celu zsumowania elementów
	przyk³adowej tablicy, utworzonej dynamicznie lub ewentualnie zdefiniowanej statycznie w
	zakresie indesków od 2 do 5 w³¹cznie.
 */


float sum(float a[], int size)
{
    float s = 0;
    int i;
    for (i = 0; i < size; i++)
        s += a[i];
    return s;
}

int main(int argc, char const *argv[])
{
    float x[] = {0.4, 0.1, 0.2, 0.8, 0.9, 0.7};
    printf("%f\n", sum(x + 2, 4));

    float random = rand() % 20;
    float *y = (float *)malloc(sizeof(float) * 10 * random);
    int i = 0;
    for (; i < random * 10; i++)
    {
        *(y + i) = (float)(random / 10 + i);
    }
    printf("%f\n", sum(y + 2, 4));
    free(y);
    return 0;
}
