// If-Else_New Year Celebration Budget Planner
// This New Year, Naina (an experienced event planner) is planning a celebration and needs your help to determine if they can host it within their budget. Naina has a list of expenses for different activities and items, along with specific conditions for hosting the celebration. Write a program to evaluate whether Naina can host the celebration or not.

// Conditions to Host the Celebration:

// The total cost of the celebration must not exceed the budget.
// The number of guests must be greater than 5 and less than or equal to 50.
// At least one of the following conditions must hold:
// The decoration cost is less than 30% of the budget.
// The total food cost is less than 50% of the budget.
// If the number of guests exceeds 25, there must be a music arrangement (i.e., musicCost > 0).
// Input Format

// The input consists of six integers:

// budget: Total budget for the celebration (in dollars).
// numGuests: Number of guests invited.
// foodCostPerGuest: Cost of food per guest (in dollars).
// decorationCost: Cost of decorations (in dollars).
// musicCost: Cost of hiring a DJ or music system (in dollars).
// extraExpenses: Additional expenses for the celebration (in dollars).
// Constraints

// 1 ≤ budget ≤ 10 1 ≤ numGuests ≤ 100 1 ≤ foodCostPerGuest,decorationCost,musicCost,extraExpenses ≤ 10^4

// Output Format

// Output a single line:

// "Celebration Approved" if Naina can host the celebration within the given conditions.
// "Celebration Denied" otherwise.

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int budget, numGuests, foodCostPerGuest, decorationCost, musicCost, extraExpenses;
    scanf("%d", &budget);
    scanf("%d", &numGuests);
    scanf("%d", &foodCostPerGuest);
    scanf("%d", &decorationCost);
    scanf("%d", &musicCost);
    scanf("%d", &extraExpenses);

    int costOfcelebration = (foodCostPerGuest * numGuests) + decorationCost + musicCost + extraExpenses;

    int cond1 = costOfcelebration <= budget;
    int cond2 = numGuests > 5 && numGuests <= 50;
    int cond3 = decorationCost < budget * 0.3 || foodCostPerGuest * numGuests < budget * 0.5;
    // int cond4 = numGuests<=25 || musicCost>0;

    if (cond1 && cond2 && cond3)
    {
        if (numGuests > 25)
        {
            if (musicCost > 0)
            {
                printf("Celebration Approved");
            }
            else
            {
                printf("Celebration Denied");
            }
        }
        else
        {
            printf("Celebration Approved");
        }
    }
    else
    {
        printf("Celebration Denied");
    }

    return 0;
}