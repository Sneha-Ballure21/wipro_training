#include<stdio.h>
int main()
    {
    int i=1, k, n;
    int num=1;
    printf("Enter n:");
    scanf("%d",&n);
    if(n>=2&&n<=10){
    while(i<=n){
        k=1;
        while(k<=n){
            printf("%d",num);
            num=num+1;
            if(k!=n){
                printf("*");
            }
            k=k+1;

        }
        printf("\n");
        i=i+1;
    }
    }
    printf("\n\n");
    return 0;
}