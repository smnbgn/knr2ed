#include <stdio.h>

#define TABSTOP 8

int calc_blanks_to_tab(int pos);

/* Write a program entab that replaces strings of blanks by the minimum number
of tabs and blanks to achieve the same spacing. Use the same tab stops as for
detab. When either a tab or a single blank would suffice to reach a tab stop, 
which should be given a preference? */
int main()
{
    int c, column, blanks, blanks_to_tab;

    column = 1;
    blanks = 0;

    while((c = getchar()) != EOF) {
        if (c == ' ') {
            blanks++;
        } else {
            while (blanks > 0) {
                blanks_to_tab = calc_blanks_to_tab(column);
                if (blanks >= blanks_to_tab){
                    putchar('\t');
                    blanks -= blanks_to_tab;
                    column += blanks_to_tab;
                } else {
                    putchar(' ');
                    blanks--;
                    column++;
                }
            }

            putchar(c);

            if (c == '\n') {
                column = 1;
            } else if (c == '\t') {
                column += calc_blanks_to_tab(column);
            } else {
                column++;
            }    
        }
    }

    /* handle case when blanks exist, but no \n before EOF */
    while (blanks > 0) {
        putchar(' ');
        blanks--;
    }

    return 0;
}

int calc_blanks_to_tab(int pos) 
{
    return TABSTOP - ((pos - 1) % TABSTOP);
}