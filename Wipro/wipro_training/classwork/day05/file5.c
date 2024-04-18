#include<stdio.h>
int main()
    {
    int i=0,n=6,num=1;
    int val=3;
    while(i<=n){
        printf("%d+",(val));
        num=num*10;
        val=val+num*3;
        i=i+1;
     }
    printf("\n\n");
    return 0;

}