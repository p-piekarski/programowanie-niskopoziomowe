#include <stdio.h>
#include <stdlib.h>

/*
	Co pojawi si� na standardowym wyj�ciu w wyniku wykonaniu poni�szego fragmentu programu,
	zak�adaj�c, �e pocz�tek napisu n1 jest pod adresem 30 000 w pami�ci?
 */


int main()
{
    char n1[20] = "Eustachy";

    n1[5] = 0;
    printf("%c\n", *n1);
    // E
    printf("%c\n", n1[7]);
    // y
    printf("%s\n", n1);
    // Eusta
    printf("%d\n", n1);
    // 30000
    printf("%s\n", n1 + 2);
    // sta
    printf("%d\n", n1 + 2);
    // 30002

    return 0;
}
