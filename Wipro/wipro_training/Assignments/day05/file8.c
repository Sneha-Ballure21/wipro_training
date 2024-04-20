/*print right triangle pattern for given n*/
#include <stdio.h>
int main()
{
    int i=1,n,j;
    printf("Enter n value:");
    scanf("%d",&n);
    while(i<=n){
        j=1;
        while(j<=i){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    
    printf("\n\n");
    return 0;
}