#include <stdio.h>


int main()
{
    int i=0;
    int line=8;
    printf("line=%d: i=%d\n", line++, i);
    printf("line=%d: i=%d\n", line++, i++);
    printf("line=%d: i=%d\n", line++, ++i);
    printf("line=%d: i=%d\n", line++, i++);
    printf("line=%d: i=%d\n", line++, ++i);
    printf("line=%d: i=%d\n", line++, i++);
    printf("line=%d: i=%d\n", line++, ++i);
    return 0;
}
