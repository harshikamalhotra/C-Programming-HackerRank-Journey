// Loops_Odd Numbers
// Write a program to print all odd numbers from 1 to N, where N is taken as input from the user. Each number should be followed by a space.
#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2)
    {
        printf("%d ", i);
    }
    return 0;
}