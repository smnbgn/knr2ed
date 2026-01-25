#include <stdio.h>

int main()
{
    printf("signed char min: %d\n", -(char)((unsigned char) ~0 >> 1));
    printf("signed char max: %d\n", (char)((unsigned char) ~0 >> 1));
    printf("unsigned char max: %u\n", (unsigned char) ~0);

    printf("shrt min: %d\n", -(short)((unsigned short) ~0 >> 1));
    printf("shrt max: %d\n", (short)((unsigned short) ~0 >> 1));
    printf("unsigned shrt max: %u\n", (unsigned short) ~0);

    printf("int min: %d\n", -(int)((unsigned int) ~0 >> 1));
    printf("int max: %d\n", (int)((unsigned int) ~0 >> 1));
    printf("unsigned int max: %u\n", (unsigned int) ~0);

    printf("long min: %ld\n", -(long)((unsigned long) ~0 >> 1));
    printf("long max: %ld\n", (long)((unsigned long) ~0 >> 1));
    printf("unsigned long max: %u\n", (unsigned long) ~0);

    printf("long long min: %lld\n", -(long long)((unsigned long long) ~0 >> 1));
    printf("long long max: %lld\n", (long long)((unsigned long long) ~0 >> 1));
    printf("unsigned long long max: %llu\n", (unsigned long long) ~0);
}
