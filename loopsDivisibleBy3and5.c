// Loops_Divisible by 3 and 5
// Write a program that prints all the numbers between 1 and 100 (inclusive) that are divisible by both 3 and 5.
#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}