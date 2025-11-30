#include <stdio.h>

/* Rewrite the temperature conversion program of Section 1.2 to use a function
for conversion */

float to_celsius(int fahr);

int main()
{
    int fahr, lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    while (fahr <= upper) {
        printf("%d\t%.1f\n", fahr, to_celsius(fahr));
        fahr = fahr + step;
    }
    return 0;
}

float to_celsius(int fahr)
{
    return 5.0 * (fahr - 32) / 9.0;
}