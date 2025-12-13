#include <stdio.h>

#define TABSTOP 4
#define MAXLINE 1000

int getline(char s[], int lim);
void detab (char output[], char input[]);

int main()
{
    char line[MAXLINE];
    char detab_line[MAXLINE * TABSTOP];
 
    while(getline(line, MAXLINE) > 0) {
        detab(detab_line, line);
        printf("%s", detab_line);
    }
    return 0;
}

int getline(char s[], int lim) {
    int c, i;

    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void detab(char output[], char input[]) {
    int i, j, k, spaces;

    for (i=0, j=0; input[i] != '\0'; ++i) {
        if (input[i] == '\t') {
            
            spaces = TABSTOP - (j % TABSTOP);
            for(k=0; k < spaces; ++k) {
                output[j++] = ' ';
            }
        } else {
            output[j++] = input[i];
        }

    }
    output[j] = '\0';
}
