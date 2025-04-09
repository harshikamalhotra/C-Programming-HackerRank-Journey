// Bitwise_Multiply By 7
// Write a program to multiply a given integer n by 7 using only bitwise operators. You are not allowed to use the multiplication (*) operator directly.
#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);

    n = (n << 2) + (n << 1) + n;
    printf("%d", n);
    return 0;
}