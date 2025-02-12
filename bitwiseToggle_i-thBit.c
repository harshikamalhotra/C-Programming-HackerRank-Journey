// Given a number n and a position i, write a program to toggle the i-th bit of n using bitwise operators.

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num, i;
    scanf("%d", &num);
    scanf("%d", &i);

    num = num ^ (1 << i);
    printf("%d", num);
    return 0;
}