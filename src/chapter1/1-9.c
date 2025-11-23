#include <stdio.h>

/* Write a program to copy its input to its output, replacing each string
of one or more blanks by a single blank */

int main()
{
    int c;
    int previous = EOF;

    while((c = getchar()) != EOF) 
    {
        if (c != ' ')
            putchar(c);
        else if (previous != ' ')
            putchar(c);

        previous = c;
    }
    return 0;
}