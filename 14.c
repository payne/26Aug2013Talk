#include <stdio.h>


int main()
{
    int i;

    for (i=65; i < 69; i++) {
        switch (i) {
            case 'A':
                printf("i=%d i=%c\n", i, i);
                break;
            default:
                printf("Not A or B!\n");
            
            case 66:
                printf("i=%d i=%c\n", i, i);
                break;
        }
    }

    return 0;
}

