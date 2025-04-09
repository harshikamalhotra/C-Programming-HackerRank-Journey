// Bitwise_Check the Sign of a Number
// Write a program to determine whether a given integer n is positive or negative using bitwise operators.
// Note: You are not allowed to use comparison operators like <, >, <=, or >=.
#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, res;
    scanf("%d", &n);
    res = n >> 31;
    if (res == 0)
        printf("Positive");
    else
        printf("Negative");

    return 0;
}