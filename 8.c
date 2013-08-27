#include <stdio.h>


int main()
{
    if (blue() || red()) {
        printf("OR is true\n");
    	printf("Because we used short circuit eval.\n");
    } else 
        printf("OR is false!\n");
    
    puts("********* test case two *******");
    if (red() || blue()) {
        printf("OR is true\n");
    } else {
        printf("OR is false!\n");
    }

    return 0;
}

int blue() 
{
    puts("blue");
    return 42;
}

int red() {
    puts("red");
    return 0;
}
