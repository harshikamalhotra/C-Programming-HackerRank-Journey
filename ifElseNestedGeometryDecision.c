// Write a program to determine the type of 2D geometric figure based on the following properties:

// Number of sides (n) – can be 3, 4, or 0 (for a circle).
// Side lengths (a,b,c,d) – three sides if n=3, four if n=4, none for n=0.
// Angles (A,B,C,D) in degrees – three angles if n=3, four if n=4, none for n=0..
// The program should classify the figure into one of these categories:

// Equilateral Triangle: n=3, all sides are equal, and all angles are 60°.
// Isosceles Triangle: n=3, two sides are equal and the two angles opposite to the equal sides are congruent to each other
// Scalene Triangle: n=3, all sides and angles are different.
// Square: n=4, all sides are equal, and all angles are 90°.
// Rectangle: n=4, opposite sides are equal, and all angles are 90°.
// Rhombus: n=4, all sides are equal, but not all angles are 90°. Opposite angles are equal in a rhombus.
// Parallelogram: n=4, opposite sides and opposite angles are equal.
// Circle: n=0.
// Invalid Figure: If the input is invalid or does not form a valid figure.

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int numOfSides, l1, l2, l3, l4, a1, a2, a3, a4;
    scanf("%d", &numOfSides);

    switch (numOfSides)
    {
    case 0:
        printf("Circle");
        break;
    case 3:
        // a+b>c || a+c>b || b+c>a
        // int l1, l2, l3;
        scanf("%d %d %d", &l1, &l2, &l3);
        if ((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1))
        {

            if ((l1 == l2) && (l2 == l3))
            {
                scanf("%d %d %d", &a1, &a2, &a3);
                if ((a1 == 60) && (a2 == 60) && (a3 == 60))
                {
                    printf("Equilateral Triangle");
                }
                else
                {
                    printf("Invalid Figure");
                }
            }
            else if ((l1 == l2 && l2 != l3) || (l2 == l3 && l3 != l1) || (l3 == l1 && l1 != l2))
            {
                printf("Isosceles Triangle");
            }
            else if (l1 != l2 && l2 != l3)
            {
                printf("Scalene Triangle");
            }
            else
            {
                printf("Invalid Figure");
            }
        }
        else
        {
            printf("Invalid Figure");
        }
        break;
    case 4:
        scanf("%d %d %d %d %d %d %d %d", &l1, &l2, &l3, &l4, &a1, &a2, &a3, &a4);
        if ((a1 == 90) && (a2 == 90) && (a3 == 90) && (a4 == 90))
        {
            if (l1 == l2 && l2 == l3 && l3 == l4)
            {
                printf("Square");
            }
            else if ((l1 == l3 && l2 == l4 && l1 != l2) || (l1 == l2 && l3 == l4 && l1 != l3) || (l1 == l4 && l2 == l3 && l1 != l2))
            {
                printf("Rectangle");
            }
            else
            {
                printf("Invalid Figure");
            }
        }
        else if ((a1 == a3 && a2 == a4 && a1 != a2) || (a1 == a2 && a3 == a4 && a1 != a3) || (a1 == a4 && a2 == a3 && a1 != a2))
        {
            if (l1 == l2 && l2 == l3 && l3 == l4)
            {
                printf("Rhombus");
            }
            else if ((l1 == l3 && l2 == l4 && l1 != l2) || (l1 == l2 && l3 == l4 && l1 != l3) || (l1 == l4 && l2 == l3 && l1 != l2))
            {
                printf("Parallelogram");
            }
            else
            {
                printf("Invalid Figure");
            }
        }
        else
        {
            printf("Invalid Figure");
        }
        break;
    default:
        printf("Invalid Figure");
    }
    return 0;
}