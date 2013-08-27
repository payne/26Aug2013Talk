#include <stdio.h>


int main()
{
    int i;
    for (i=0; i < 10; ++i) {
        printf("i=%d\n", i);
    }
    do {
        printf("i=%d\n", i);
        i--;
    } while (i>0);
    return 0;
}
