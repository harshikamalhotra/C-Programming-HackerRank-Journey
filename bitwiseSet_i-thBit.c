// Given a number n and a position i, write a program to set the i-th bit of n using bitwise operators.

// Input Format

// The first line contains an integer n.
// The second line contains an integer i.
// Constraints

// -10^9 ≤ n ≤ 10^9
// 0 ≤ i ≤ 31
// Output Format

// Print the updated value of n after setting the i-th bit.

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num, i, set;
    scanf("%d", &num);
    scanf("%d", &i);

    set = 1 << i;
    num = num | set;
    printf("%d", num);
    return 0;
}