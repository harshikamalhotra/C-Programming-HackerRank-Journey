// Loops_Cubes of Natural Numbers
// Write a program to print the cubes of first N natural numbers , where N is taken as input from the user. Each number should be followed by a space.
#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned short int n;
    scanf("%hd", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i * i * i);
    }
    return 0;
}