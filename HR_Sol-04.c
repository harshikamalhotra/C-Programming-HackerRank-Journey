// If-Else_Leap Year
// A year is considered a leap year if:

// It is divisible by 4.
// However, if it is divisible by 100, it must also be divisible by 400 to be considered a leap year.
// Write a program that checks if a given year is a leap year or not, outputs the result in a specific format, and handles invalid years as well.

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int year;
    scanf("%d", &year);
    if (year <= 0)
    {
        printf("The given year %d is Invalid year.", year);
    }
    else if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("Yes, %d is a leap year.", year);
    }
    else
    {
        printf("No, %d is not a leap year.", year);
    }
    return 0;
}