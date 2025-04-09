// Bitwise_AND of 2 Numbers
// Write a program to find the bitwise AND of two given integers a and b without using the & operator. You can use other bitwise operators like |, ^, ~, and shifts to compute the result.
#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    scanf("%d %d", &a, &b);
    int and = ~(~a | ~b);
    printf("%d", and);
    return 0;
}