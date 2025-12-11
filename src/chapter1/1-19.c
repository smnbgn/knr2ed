#include <stdio.h>
#define MAXLINE 1000

int getline(char s[], int lim);
void reverse(char s[]);


/* Write a function reverse(s) that reverses the character string s. Use it to 
write a program that reverses its input a line at a time */
int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
    {
        reverse(line);
        printf("%s", line);
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

void reverse(char s[])
{
    int end, i, j;
    
    //find the end of the string
    end = 0;
    while(s[end] != '\0'){
        end++;
    }

    //also watch for \n
    if ((end > 0) && (s[end - 1]  == '\n'))
            end--;

    for(i=0, j = end - 1; i < j; i++, j--) {
        char temp = s[j];
        s[j] = s[i];
        s[i] = temp;
    }
}
