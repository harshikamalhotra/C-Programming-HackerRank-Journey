// Given an integer n and a position i, your task is to write a program to extract the value of the i-th bit of n. The i-th bit is counted from the right, starting at position 0 (0-based indexing). Return 1 if the bit is set, otherwise return 0.

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i;
    scanf("%d %d", &n, &i);
    n = n >> i & 1;
    printf("%d", n);
    return 0;
}