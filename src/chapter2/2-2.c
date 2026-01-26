#include <stdio.h>

#define MAX_SIZE 300

/* Write a loop equivalent to the for loop above without using && or || */

int getline(char[], int);

int main() 
{
    int i, size_returned;
    char c_arr[MAX_SIZE];

    size_returned = getline(c_arr, MAX_SIZE);

    printf("%s", c_arr);

    return 0;
}

int getline(char s[], int lim)
{
    int c, i;

    i = 0;
    while (i < lim-1) {

        c = getchar();

        if (c == '\n') {
            break;
        } else if (c == EOF) {
            break;
        }

        s[i++] = c;
    }
    s[++i] = '\0';

    return i;
}