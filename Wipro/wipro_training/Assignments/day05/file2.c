/* print right triangle star pattern for given n
*
**
***
****
***
**
*   */
#include<stdio.h>
int main()
    {
        int i=1,n,j;
        printf("Enter n:");
        scanf("%d",&n);
        if(n>=2&&n<=10){
            for(i=1;i<=n;i++){
                for(j=1;j<=i;j++){
                    printf("*");
                    
                }
                printf("\n");
            }
            for(i=n-1;i>=1;i--){
                for(j=i;j>=1;j--){
                    printf("*");
                }
                printf("\n");
            }
        }
        return 0;
    }