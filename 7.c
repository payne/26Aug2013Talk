#include <stdio.h>

int main(int argc, char *argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int and_demo = a && b; 
    int or_demo = a || b;

    printf("a=%d b=%d and_demo=%d or_demo=%d\n", a,b,and_demo,or_demo);
    if (and_demo) printf("AND is true!\n");
    if (or_demo) printf("OR is true!\n");

    return 0;
}
