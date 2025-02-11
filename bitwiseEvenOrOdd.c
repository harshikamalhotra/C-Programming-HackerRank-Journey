// Write a program to determine whether a given integer N is even or odd using only bitwise operators.

// The program should not use the modulo (%) operator.

// Input Format

// A single integer N
// Constraints

// -10^5 ≤ N ≤ 10^5
// Output Format

// Print Even if N is an even number.
// Print Odd if N is an odd number.

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num, res;
    scanf("%d", &num);
    res = num & 1;

    if (res)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
    return 0;
}