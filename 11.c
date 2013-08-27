#include <stdio.h>


int main()
{
    int i=0;
    int line=8;

    while (i < line) {
       printf("i=%d\n", i);
       ++i;
    }


    for (i=0; i < line; ++i) {
       printf("i=%d\n",  i);
    }

    return 0;
}
