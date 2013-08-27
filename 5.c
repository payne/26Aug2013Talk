#include <stdio.h>

int main(int argc, char *argv[]) 
{
    int i;
    short i_am_short;
    unsigned short u;
    int num=atoi(argv[1]);

    i=0;
    while (i < num) {
        u=u+1;
        i=u;
        i_am_short=u;
        printf("i=%d u=%d\n", i_am_short,u);
    }

    return 0;
}
