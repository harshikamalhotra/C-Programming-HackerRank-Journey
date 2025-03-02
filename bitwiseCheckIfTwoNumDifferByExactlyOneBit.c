// Write a program to check if two integers a and b differ by exactly one bit using bitwise operators. Two numbers differ by exactly one bit if their binary representations differ in only one position.
#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    scanf("%d %d", &a, &b);
    int res;
    res = a ^ b;

    if ((res != 0) && (res & (res - 1)) == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}