// If-Else_Days in Month & Year
// You are tasked with building a small utility program for a calendar management system. The program should determine the number of days in a specific month of a given year. It must also handle invalid inputs gracefully.

// Write a program that:

// Reads two integers:
// year (e.g., 2024)
// month (1 for January, 2 for February, ..., 12 for December).
// Determines the number of days in the specified month for the given year, considering leap years.
// Handles invalid inputs:
// If the month is not between 1 and 12, output "Invalid Month"
// If the year is less than 1, output "Invalid Year"

#include <stdio.h>
#include <string.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int month;
    int year;
    scanf("%d", &month);
    scanf("%d", &year);

    if (month < 1 || month > 12)
    {
        printf("Invalid Month\n");
    }
    if (year < 1 || year < -1000000 || year > 1000000)
    {
        printf("Invalid Year");
    }
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("31");
    }
    else if (month == 2)
    {
        if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
        {
            printf("29");
        }
        else
        {
            printf("28");
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("30");
    }
    return 0;
}