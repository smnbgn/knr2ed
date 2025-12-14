#include <stdio.h>

#define TABSTOP 8

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
