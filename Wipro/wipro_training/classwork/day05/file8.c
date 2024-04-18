#include <stdio.h>
int main()
{
    int i=1,n,j=1;
    printf("Enter n:");
    scanf("%d",&n);
    if(n>=2&&n<=10){
    while(i<=n){
        while(j<=i){
        printf("*");
        j++;
    }
    printf("\n");
    i++;
    }
    i=n-1;
    while(i>=1){
        while(j<=i){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    }
    printf("\n\n");
    return 0;
}