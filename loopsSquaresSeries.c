#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned short int n;
    scanf("%hd", &n);

    for (int i = 1; i <= n; i++)
    {
        if ((i * i) % 3 == 0)
        {
            ++i;
            ++n;
        }
        printf("%d ", i * i);
    }
    return 0;
}