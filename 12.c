#include <stdio.h>


int main()
{
    int i;

    for (i = 512; i != 0; i /= 2) {
        printf("i=%d\n", i);
    }

    for (i=512; i; i >>= 1) {
        printf("i=%d\n", i);
    }

}

