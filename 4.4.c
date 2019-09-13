#include <stdio.h>
#include <stdlib.h>

/*
	Poni�sza funkcja s�u�y do sumowania element�w tablicy typu float, opisanej przez odpowiednie
	parametry. Prosz� poda� przuk�ad jej u�ycia (wywo�ania) w celu zsumowania element�w
	przyk�adowej tablicy, utworzonej dynamicznie lub ewentualnie zdefiniowanej statycznie w
	zakresie indesk�w od 2 do 5 w��cznie.
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
