/*print the series 1,2,4,8,16,32,64 and given n=8*/
#include<stdio.h>
int main()
    {
    int i=1,n=1;
    while(n<=7){
        printf("%d",i);
        i=i*2;
        n=n+1;
        if(n!=8){
            printf(",");
        }
    }
    printf("\n\n");
    return 0;
}