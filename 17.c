#include <stdio.h>

int main()
{

    int i;
    char ch;

    for (i=0; i < 10 && (ch=getchar()) != EOF; i++) {
        printf("i=%d ch=%d=%c\n", i, ch, ch);
        if (7==i) { printf("I like seven.  It's a good movie!\n"); }
        if (i==7) { printf("I like seven.  It's a good movie!\n"); }
        if (i=7) { printf("I like seven.  It's a good movie!\n"); }
        if (7=i) { printf("I like seven.  It's a good movie!\n"); }
    }

    return 0;
}
