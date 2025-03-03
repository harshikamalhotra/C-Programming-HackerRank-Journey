// Write a program to find the minimum of two integers a and b without using any comparison operators (<, >, <=, >=). Use only bitwise operators and logical operators to determine which number is smaller.
#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    scanf("%d %d", &a, &b);
    int res;
    res = a - b;
    res = res >> 31;
    if (res & 1)
    {
        printf("%d", a);
    }
    else
    {
        printf("%d", b);
    }
    return 0;
}