#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned short int n;
    scanf("%hd", &n);

    for (int i = 1; i <= n; i++)
    {
        int num = i;
        if (i % 2 == 0)
        {
            num *= (-1);
        }
        printf("%d ", num);
    }
    return 0;
}