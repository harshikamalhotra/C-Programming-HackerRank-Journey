// If-Else_Money Heist
// You and your friend decided to pull off a heist at a heavily guarded bank vault. The vault is protected by a 10-digit passcode, each digit ranging from 0 to 9. However, the configuration is not as simple as just remembering the passcode. The vault's passcode is not straightforward — three wrong digits are randomly placed at three different positions.

// Your friend, using some sophisticated tool, has managed to decode the correct digits and their positions. He tells you the exact positions (0-indexed) of the incorrect digits and the number by which the dial must be rotated to correct them.

// Your task is to apply these changes and return the final passcode that will successfully open the vault.

// Note: After the number 9, the dial wraps around back to 0.

// Input Format

// Space separated 10-digit vault configuration with 3 wrong digits.
// Three pairs in new line provided, each pair on a new line. Each pair contains:
// The index of the incorrect digit (0-indexed).
// The number by which the dial must be rotated to correct it.
// Constraints

// All inputs are digits from 0 to 9

// Output Format

// Print the final 10-digit space separated passcode with the corrected digits at their respective positions which opens the vault.

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    int index1, index2, index3;
    int dial1, dial2, dial3;
    int result;
    scanf("%d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);
    scanf("%d %d", &index1, &dial1);
    scanf("%d %d", &index2, &dial2);
    scanf("%d %d", &index3, &dial3);

    switch (index1)
    {
    case 0:
        result = n1 + dial1;
        if (result >= 10)
            n1 = result - 10;
        else
            n1 = result;
        break;
    case 1:
        result = n2 + dial1;
        if (result >= 10)
            n2 = result - 10;
        else
            n2 = result;
        break;
    case 2:
        result = n3 + dial1;
        if (result >= 10)
            n3 = result - 10;
        else
            n3 = result;
        break;
    case 3:
        result = n4 + dial1;
        if (result >= 10)
            n4 = result - 10;
        else
            n4 = result;
        break;
    case 4:
        result = n5 + dial1;
        if (result >= 10)
            n5 = result - 10;
        else
            n5 = result;
        break;
    case 5:
        result = n6 + dial1;
        if (result >= 10)
            n6 = result - 10;
        else
            n6 = result;
        break;
    case 6:
        result = n7 + dial1;
        if (result >= 10)
            n7 = result - 10;
        else
            n7 = result;
        break;
    case 7:
        result = n8 + dial1;
        if (result >= 10)
            n8 = result - 10;
        else
            n8 = result;
        break;
    case 8:
        result = n9 + dial1;
        if (result >= 10)
            n9 = result - 10;
        else
            n9 = result;
        break;
    case 9:
        result = n10 + dial1;
        if (result >= 10)
            n10 = result - 10;
        else
            n10 = result;
        break;
    }
    switch (index2)
    {
    case 0:
        result = n1 + dial2;
        if (result >= 10)
            n1 = result - 10;
        else
            n1 = result;
        break;
    case 1:
        result = n2 + dial2;
        if (result >= 10)
            n2 = result - 10;
        else
            n2 = result;
        break;
    case 2:
        result = n3 + dial2;
        if (result >= 10)
            n3 = result - 10;
        else
            n3 = result;
        break;
    case 3:
        result = n4 + dial2;
        if (result >= 10)
            n4 = result - 10;
        else
            n4 = result;
        break;
    case 4:
        result = n5 + dial2;
        if (result >= 10)
            n5 = result - 10;
        else
            n5 = result;
        break;
    case 5:
        result = n6 + dial2;
        if (result >= 10)
            n6 = result - 10;
        else
            n6 = result;
        break;
    case 6:
        result = n7 + dial2;
        if (result >= 10)
            n7 = result - 10;
        else
            n7 = result;
        break;
    case 7:
        result = n8 + dial2;
        if (result >= 10)
            n8 = result - 10;
        else
            n8 = result;
        break;
    case 8:
        result = n9 + dial2;
        if (result >= 10)
            n9 = result - 10;
        else
            n9 = result;
        break;
    case 9:
        result = n10 + dial2;
        if (result >= 10)
            n10 = result - 10;
        else
            n10 = result;
        break;
    }
    switch (index3)
    {
    case 0:
        result = n1 + dial3;
        if (result >= 10)
            n1 = result - 10;
        else
            n1 = result;
        break;
    case 1:
        result = n2 + dial3;
        if (result >= 10)
            n2 = result - 10;
        else
            n2 = result;
        break;
    case 2:
        result = n3 + dial3;
        if (result >= 10)
            n3 = result - 10;
        else
            n3 = result;
        break;
    case 3:
        result = n4 + dial3;
        if (result >= 10)
            n4 = result - 10;
        else
            n4 = result;
        break;
    case 4:
        result = n5 + dial3;
        if (result >= 10)
            n5 = result - 10;
        else
            n5 = result;
        break;
    case 5:
        result = n6 + dial3;
        if (result >= 10)
            n6 = result - 10;
        else
            n6 = result;
        break;
    case 6:
        result = n7 + dial3;
        if (result >= 10)
            n7 = result - 10;
        else
            n7 = result;
        break;
    case 7:
        result = n8 + dial3;
        if (result >= 10)
            n8 = result - 10;
        else
            n8 = result;
        break;
    case 8:
        result = n9 + dial3;
        if (result >= 10)
            n9 = result - 10;
        else
            n9 = result;
        break;
    case 9:
        result = n10 + dial3;
        if (result >= 10)
            n10 = result - 10;
        else
            n10 = result;
        break;
    }

    printf("%d %d %d %d %d %d %d %d %d %d", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10);

    return 0;
}