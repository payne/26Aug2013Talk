#include <stdio.h>

int main(int argc, char *argv[])
{

    int start=atoi(argv[1]);
    int stop=atoi(argv[2]);
    int i;
    char c;

    i=start;
    while (i < stop) {
        i++; // i=i+1 is for losers!
        c = (char) i; /* Look, Dr. Hahn we talked about casting! */
        c = i; /* Look, Dr. Hahn we talked about casting! 
                  Including silent casts.
                */
        printf("i=%d c=%c\n", i, c);
    }

    return 0;
}
