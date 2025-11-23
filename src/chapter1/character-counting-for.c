#include <stdio.h>

/* count characters in input; 2nd version */
int main()
{
    long nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%ld\n", nc);
    return 0;
}