// Bitwise_Check if Two Numbers are Complementary
// Write a program to determine whether two given integers a and b are complementary.
// Two numbers are complementary if every bit in a is the opposite of the corresponding bit in b.

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    scanf("%d %d", &a, &b);

    if ((~a) == b)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}