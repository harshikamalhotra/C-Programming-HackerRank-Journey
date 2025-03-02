// Write a program to check if a given integer n is a power of 2 using bitwise operators.
#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    if (n > 0 && (n & (n - 1)) == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}