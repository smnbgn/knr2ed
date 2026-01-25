#include <stdio.h>

#define COLUMN_LIMIT 10

/* Exercise 1-22. Write a program to "fold" long input lines into two or more
shorter lines after the last non-blank character that occurs before the n-th
column of input. Make sure your program does something intelligent with very
long lines, and if there are no blanks or tabs before the specified column. */

int main()
{
    int c, pos, i, last_blank;
    char buffer[COLUMN_LIMIT + 1];  
    
    pos = 0;
    last_blank = -1; 
    
    while ((c = getchar()) != EOF) {
   
        buffer[pos] = c;
        
        if (c == '\n') {
         
            for (i = 0; i <= pos; i++) {
                putchar(buffer[i]);
            }
            pos = 0;
            last_blank = -1;
            continue;  
        }
        
        if (c == ' ' || c == '\t') {
            last_blank = pos;  
        }
        
        if (pos == COLUMN_LIMIT) {
             /* blank in the line */
            if (last_blank >= 0) {
                for (i = 0; i <= last_blank; i++) {
                    putchar(buffer[i]);
                }
                putchar('\n');
                
                /* shift buffer */
                int shift_start = last_blank + 1;
                int new_pos = 0;
                for (i = shift_start; i <= pos; i++) {
                    buffer[new_pos++] = buffer[i];
                }
                pos = new_pos - 1;  
                
                last_blank = -1;
                for (i = 0; i < pos; i++) {
                    if (buffer[i] == ' ' || buffer[i] == '\t') {
                        last_blank = i;
                    }
                }
            /* no blanks, split mid-word */
            } else { 
                for (i = 0; i < pos; i++) {
                    putchar(buffer[i]);
                }
                putchar('\n');
                
                buffer[0] = buffer[pos];
                pos = 0; 
                last_blank = -1;
            }
        }
        
        pos++;
    }
    
    for (i = 0; i < pos; i++) {
        putchar(buffer[i]);
    }
    
    return 0;
}