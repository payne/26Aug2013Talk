#include <stdio.h>  // Bring in a header from the standard spot < > 
                    // ("" local)

int main(int argc, char *argv[], char *env[])
{
    int a=atoi(argv[1]);
    int b=atoi(argv[2]);
    int n=0;

    printf("%s: %d+%d=%d\n", argv[0], a,b,a+b);
    while (env[n]) {
        printf("%s\n", env[n]);
        n=n+1;
    }
    return 0;
}
