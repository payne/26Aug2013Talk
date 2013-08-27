#include <stdio.h>

int main()
{

    int i;
    char ch;

    for (i=0; i < 10; i++) {
        if (0 == i % 2) {
           printf("i=%d Even!\n", i); 
        } else {
            continue; 
        } 
        if (0==i%4) {
           printf("i=%d Multiple of four!\n", i); 
           /* break; */
        } else {
            printf("NOT multiple of 4\n");
        }
    }

    return 0;
}
