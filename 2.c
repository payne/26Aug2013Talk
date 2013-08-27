#include <stdio.h>  // Bring in a header from the standard spot < > 
                    // ("" local)

int main(int argc, char *argv[], char *env[])
{
    int a=atoi(argv[1]);
    int b=atoi(argv[2]);

    printf("%s: %d+%d=%d\n", argv[0], a,b,a+b);
    return 0;
}
