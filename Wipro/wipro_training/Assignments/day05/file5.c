/*print the sum of the series 3+33+333+3333+33333+333333*/
#include<stdio.h>
int main()
    {
    int i=0,n=6,num=1;
    int val=3;
    int sum=0;
    while(i<=n){
        sum=sum+val;
        num=num*10;
        val=val+num*3;
        i=i+1;
        
     }
    printf("sum of the series:%d",sum);
    printf("\n\n");
    return 0;

}