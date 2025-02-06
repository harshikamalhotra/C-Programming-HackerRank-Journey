// If-Else_Electricity Bill Calculator
// A user consumes a certain number of electricity units, and the electricity bill is calculated as follows:

// For units ≤ 100: The rate is ₹5 per unit.
// For units > 100 and ≤ 300: The rate is ₹7 for the remaining units.
// For units > 300: The rate is ₹10 for units above 300.
// Additionally, if the total bill amount is ₹1,200 or less, a 10% discount is applied to the bill.

// Write a program to compute the total electricity bill based on the given number of units and handles invalid input as well.

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int unit, flag = 1;
    float rate;
    scanf("%d", &unit);
    if (unit >= 0 && unit <= 100)
    {
        rate = unit * 5;
    }
    else if (unit > 100 && unit <= 300)
    {
        rate = (100 * 5) + (unit - 100) * 7;
    }
    else if (unit > 300)
    {
        rate = (100 * 5) + (200 * 7) + (unit - 300) * 10;
    }
    else
    {
        printf("Invalid Input!");
        flag = 0;
    }
    if (rate <= 1200)
    {
        rate = rate - (0.1 * rate);
    }
    if (flag == 1)
    {
        printf("The electricity bill is: %.2f.", rate);
    }
    return 0;
}