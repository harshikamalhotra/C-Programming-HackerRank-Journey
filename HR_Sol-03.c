// If-Else_Tax Calculator
// Aakash has recently started his new job and is extremely busy managing his work and tasks. As a result, he doesn’t have time to figure out his income tax calculations manually. To simplify this, he wants someone to create a reliable system that can calculate his income tax based on the Indian tax rules.

// The system should work as follows:

// If Aakash’s income is ₹2,50,000 or less, no tax should be calculated.
// For an income greater than ₹2,50,000 upto ₹5,00,000, the tax is 5% on the amount exceeding ₹2,50,000.
// For an income greater than ₹5,00,000 upto ₹10,00,000, the tax is: 5% on the first ₹2,50,000 above ₹2,50,000, 20% on the amount exceeding ₹5,00,000.
// For an income above ₹10,00,000, the tax is: 5% on the first ₹2,50,000 above ₹2,50,000, 20% on the next ₹5,00,000 above ₹5,00,000, 30% on the amount exceeding ₹10,00,000.
// The system should take his annual income as input and output the total tax payable. Additionally, if the input is invalid, the system should display "INVALID".

// Aakash expects this system to be efficient and user-friendly since he needs it to quickly determine his tax liability without any hassle. Your program should calculate the total tax payable based on these rules.

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float income;
    float tax = 0;

    scanf("%f", &income);

    if (income >= 0 && income <= 250000)
    {
        printf("%.2f", tax);
    }
    else if (income > 250000 && income <= 500000)
    {
        tax = (income - 250000) * 0.05;
        printf("%.2f", tax);
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = (250000 * 0.05) + ((income - 500000) * 0.2);
        printf("%.2f", tax);
    }
    else if (income > 1000000)
    {
        tax = (250000 * 0.05) + (500000 * 0.2) + ((income - 1000000) * 0.3);
        printf("%.2f", tax);
    }
    else
    {
        printf("INVALID");
    }
    return 0;
}