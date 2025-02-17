// Given an integer n, write a program to isolate the rightmost set bit in its binary representation. All other bits should be turned off except the rightmost set bit. The result should be returned as an integer.

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, result;
    scanf("%d", &n);
    result = n & (-n);
    printf("%d", result);
    return 0;
}