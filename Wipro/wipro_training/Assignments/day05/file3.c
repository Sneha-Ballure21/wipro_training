/*Print the series 0,3,8,15,24,35,48,63,80,99 ,given n=10*/
#include<stdio.h>
int main()
    {
    int i=1,n=10;
    
    while(i<=n){
        printf("%d",(i*i-1));
        i=i+1;
        if (i!=n+1){
            printf(",");
        }
        
    }
    printf("\n\n");
    return 0;

}