// If-Else_Largest Among Three Numbers
// Write a program to determine the largest number among three integer numbers.

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 >= num2 && num1 >= num3)
    {
        printf("The largest number is : %d", num1);
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("The largest number is : %d", num2);
    }
    else
    {
        printf("The largest number is : %d", num3);
    }

    return 0;
}