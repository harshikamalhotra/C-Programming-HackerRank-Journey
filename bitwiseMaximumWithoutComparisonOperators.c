// Write a program to find the maximum of two integers a and b without using any comparison operators (<, >, <=, >=) and if-else at any stage in the program. Use only bitwise operators and logical operators to determine which number is larger.
#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    scanf("%d %d", &a, &b);
    int res, msb, maxNum;
    res = a - b;
    res = res >> 31;
    // msb=res&1;

    maxNum = (a & (~res)) | (b & res);
    printf("%d", maxNum);

    return 0;
}