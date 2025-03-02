#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    scanf("%d %d", &a, &b);
    int res;
    res = a ^ b;

    if ((res != 0) && (res & (res - 1)) == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}