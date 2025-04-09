// Bitwise_Check Opposite Signs
// Write a program to determine if two integers a and b have opposite signs using bitwise operators.
#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, signOfa, signOfb;
    scanf("%d %d", &a, &b);
    signOfa = (a >> 31) & 1;
    signOfb = (b >> 31) & 1;

    if (signOfa == 1 && signOfb == 0)
        printf("Yes");
    else if (signOfa == 0 && signOfb == 1)
        printf("Yes");
    else
        printf("No");
    return 0;
}