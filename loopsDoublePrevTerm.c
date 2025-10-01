#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long long int n;
    scanf("%lld", &n);
    long long int temp=1;
    
    if(n>=1){
        printf("<");
        for(int i=1; i<=n; i++){
            
            printf("%lld", temp);
            temp=temp+temp;
            if(i==n)
                printf(">");
            else
                printf(" ");
        }
    }
    return 0;
}