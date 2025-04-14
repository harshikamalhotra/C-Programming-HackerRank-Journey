// Loops_Arithmetic Progression
// Write a program to generate the first n terms of an Arithmetic Progression (AP). The first term a and the common difference d are provided.
#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned short int n;
    signed short int a;
    signed short int d;
    scanf("%hd", &n);
    scanf("%hd %hd", &a, &d);
    int temp = a;

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", temp);
        temp += d;
    }
    return 0;
}