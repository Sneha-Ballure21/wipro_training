/*Factorial program*/
#include<stdio.h>
int fact(int);

int main(){
    int n;
    printf("Enter n value:");
    scanf("%d",&n);
    printf("factorial=%d\n",fact(n));
    
}
int fact(int n){
    int ret=0;
    if(n==0)
        return 1;
    ret=n*fact(n-1);
    return ret;


}