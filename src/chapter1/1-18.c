#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int getline(char line[], int maxline);
int remove_trailing(char line[], int len);

/* Write a program to remove trailing blanks and tabs from each line of input,
and to delete entirely blank lines. */
int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0) {
            if (remove_trailing(line, len) > 0) {
                printf("%s", line);
            }
    }
    
    return 0;
}

int getline(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar())!= EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

int remove_trailing(char line[], int len)
{
    int i = len - 1;

    while (i >= 0 && (line[i] == ' ' || line[i] == '\t' || line[i] == '\n' 
                                     || line[i] == '\0')) {
        i--;
    }

    if(i >= 0) {
        line[++i] = '\n';
        line[++i] = '\0';
        return i;
    } 
    else {
        line[0] = '\0';
        return 0;
    }
}