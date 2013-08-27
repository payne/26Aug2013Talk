#include <stdio.h>

int main()
{

    int i=0;

    /*
    if (0==i) {
        i = 10;
    } else { 
        i = 5;
    }
    */

    i = (0==i) ? 10 : 5; /* Ternary operator */
    printf("i=%d\n", i);
    i = (0==i) ? ((0==i) ? 7 : 12) : 5; /* Ternary operator */
    printf("i=%d\n", i);

    return 0;
}
