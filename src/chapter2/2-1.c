#include <stdio.h>
#include <limits.h>

int main()
{
    printf("signed char min: %d\n", SCHAR_MIN);
    printf("signed char max: %d\n", SCHAR_MAX);
    printf("unsigned char max: %u\n", UCHAR_MAX);

    printf("shrt min: %d\n", SHRT_MIN);
    printf("shrt max: %d\n", SHRT_MAX);
    printf("unsigned shrt max: %u\n", USHRT_MAX);

    printf("int min: %d\n", INT_MIN);
    printf("int max: %d\n", INT_MAX);
    printf("unsigned int max: %u\n", UINT_MAX);

    printf("long min: %ld\n", LONG_MIN);
    printf("long max: %ld\n", LONG_MAX);
    printf("unsigned long max: %u\n", ULONG_MAX);

    printf("long long min: %lld\n", LLONG_MIN);
    printf("long long max: %lld\n", LLONG_MAX);
    printf("unsigned long long max: %llu\n", ULLONG_MAX);
}
