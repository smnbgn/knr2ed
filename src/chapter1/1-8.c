#include <stdio.h>

/* Write a program to count blanks, tabs, and newlines */

#include <stdio.h>

int main()
{
    int b, t, n, c;

    b = t = n = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++b;
        else if (c == '\t')
            ++t;
        else if (c == '\n')
            ++n;
    }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", b, t, n);
    return 0;
}