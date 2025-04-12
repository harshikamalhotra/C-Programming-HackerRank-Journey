// Loops_N Multiples
// Write a program that takes two inputs from the user and output the first n multiples of x.

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned short int n;
    signed short int x;
    scanf("%hd %hd", &n, &x);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", x * i);
    }

    return 0;
}