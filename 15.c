#include <stdio.h>


int main()
{
    int i;

    for (i=65; i < 69; i++) {
        switch (i) {
            case 'A':
            case 66:
            case 'C':
                printf("i=%d i=%c\n", i, i);
                break;
            default:
                printf("Not A or B!\n");
                break;
        }
    }

    return 0;
}

