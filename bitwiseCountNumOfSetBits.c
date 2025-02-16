#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int setbit = 0;
    int count = 0;
    scanf("%d", &n);

    setbit = n & 1;
    count += setbit;

    n = n >> 1;
    setbit = n & 1;
    count += setbit;

    n = n >> 1;
    setbit = n & 1;
    count += setbit;

    n = n >> 1;
    setbit = n & 1;
    count += setbit;
    printf("%d", count);

    return 0;
}