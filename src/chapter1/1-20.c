#include <stdio.h>

#define TABSTOP 8

/* Write a program detab that replaces tabs in the input with the proper number
of blanks to space to the next tab stop. Assume a fixed set of tab stops, say 
every n columns. Should n be a variable or a symbolic parameter? */
int main()
{
    int c;
    int column, blanks, i;
 
    column = 1;
    while((c=getchar()) != EOF) {
        if (c == '\n') {
            putchar(c);
            column = 1;
        } else if (c == '\t'){
            blanks = TABSTOP - ((column - 1) % TABSTOP);
            for(i=0; i < blanks; i++) {
                putchar(' ');
                column++;
            }
        } else {
            putchar(c);
            column++;
        }
    }
    return 0;
}
