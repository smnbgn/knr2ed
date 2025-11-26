#include <stdio.h>

#define MAX_WORD 10
#define IN 1
#define OUT 0

/* write a program to print a histogram of the lengths of words in its output.
It is easy to draw the histogram with the bars horizontal; a vertical 
orientation is more challenging. */

int main()
{
    int lengths[MAX_WORD];
    int c, nc, state, i, j, overflow;

    for(i = 0; i < MAX_WORD; i++)
        lengths[i] = 0;

    state = OUT;
    nc = 0;
    overflow = 0;

    while((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN)
            {
                state = OUT;
                if (nc > MAX_WORD)
                    overflow++;
                else
                    lengths[nc - 1]++;
                nc = 0;
            }       
        }
        else
        {   
            if (state == OUT)
                state = IN;

            nc++;
        }   
    }

    /* special case: user presses EOF before newline */
    if (state == IN) {
        if (nc > MAX_WORD)
            overflow++;
        else
            lengths[nc - 1]++;
    }

    for(i = 0; i < MAX_WORD; i++) {
        printf("%3d: ", i + 1);
        for (j = 0; j < lengths[i]; j++)
            putchar('*');
        putchar('\n');
    }
            
    printf("Overflow words: %d\n", overflow);
    return 0;
}