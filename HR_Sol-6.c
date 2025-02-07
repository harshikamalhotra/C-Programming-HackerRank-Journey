// Steel is graded based on its properties of hardness, carbon content, and tensile strength. The grade is determined by the following conditions:

// 1. Hardness must be greater than 50.
// 2. Carbon content must be less than 0.7.
// 3. Tensile strength must be greater than 5600.
// Based on these conditions, the grades are assigned as follows:

// 10: If all three conditions are met.
// 9 : If conditions (i) and (ii) are met.
// 8 : If conditions (ii) and (iii) are met.
// 7 : If conditions (i) and (iii) are met.
// 6 : If only one condition is met.
// 5 : If none of the conditions are met.
// Your task is to determine the grade of steel based on the provided values of hardness, carbon content, and tensile strength.

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int h, t, grade = 0;
    float c;

    scanf("%d %f %d", &h, &c, &t);

    if ((h >= 0 && h <= 500) && (c >= 0.0 && c <= 1.0) && (t >= 0 && t <= 50000))
    {
        if (h > 50 && c < 0.7 && t > 5600)
        {
            grade = 10;
        }
        else if (h > 50 && c < 0.7)
        {
            grade = 9;
        }
        else if (c < 0.7 && t > 5600)
        {
            grade = 8;
        }
        else if (h > 50 && t > 5600)
        {
            grade = 7;
        }
        else if (h > 50 || c < 0.7 || t > 5600)
        {
            grade = 6;
        }
        else
        {
            grade = 5;
        }
    }
    printf("The grade of the steel is: %d\n", grade);

    if (grade == 10)
    {
        printf("All of the conditions met.");
    }
    else if (grade == 9 || grade == 8 || grade == 7)
    {
        printf("Two conditions met.");
    }
    else if (grade == 6)
    {
        printf("Only one condition met.");
    }
    else if (grade == 5)
    {
        printf("None of the conditions met.");
    }
    return 0;
}