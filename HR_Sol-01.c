// Swap Two Numbers
// Write a program to swap two numbers.

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, temp;
    scanf("%d", &a);
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("a = %d\nb = %d", a, b);
    return 0;
}