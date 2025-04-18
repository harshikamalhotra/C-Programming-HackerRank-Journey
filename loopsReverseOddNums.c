// Loops_Reverse Odd Numbers
// Write a program to print the first n odd numbers, starting from 1, in reverse order. The odd numbers should be printed starting from the largest odd number in the sequence, moving backwards to the smallest odd number.
#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned short int n;
    scanf("%hd", &n);

    for (int i = n; i >= 1; --i)
    {
        printf("%d", (i * 2) - 1);
        if (i == 1)
        {
            printf(".");
        }
        else
        {
            printf(" ");
        }
    }
    return 0;
}