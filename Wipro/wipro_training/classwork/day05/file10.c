#include<stdio.h>
int main()
    {
        int i=1,n,j;
        printf("Enter n:");
        scanf("%d",&n);
        if(n>=2&&n<=10){
            while(i<=n){
                j=1;
                while(j<=n){
                    printf("*");
                    j++;
                }
                printf("\n");
                i++;
            }
        }
        return 0;
    }