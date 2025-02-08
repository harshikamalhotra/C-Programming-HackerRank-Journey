// If-Else_Three Sticks
// Aman has three sticks and wants to classify the shape he can form by connecting their ends. The classification is based on the following rules:

// The shape(triangle) is classified as:

// Equilateral: All three sticks are of the same length.
// Isosceles: Exactly two sticks are of the same length.
// Scalene: All three sticks have different lengths.
// However, if the sticks cannot be connected to form a triangle due to their lengths, it is classified as an Invalid shape.

// Aman needs a program that will take the lengths of the three sticks as input, validate if they can form a valid closed shape, and output the correct classification.

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // The sum of the length of the two sides of a triangle is greater than the length of the third side.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("Lengths: [%d, %d, %d]\n", a, b, c);

    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        if (a == b && b == c)
        {
            printf("Type: Equilateral\n");
            printf("All sides are of the same length.");
        }
        else if (a == b || b == c || c == a)
        {
            printf("Type: Isosceles\n");
            printf("Exactly two sides are equal.");
        }
        else if (a != b && b != c)
        {
            printf("Type: Scalene\n");
            printf("All sides are of different lengths.");
        }
    }
    else
    {
        printf("Type: Invalid\n");
        printf("Cannot form a valid shape.");
    }
    return 0;
}