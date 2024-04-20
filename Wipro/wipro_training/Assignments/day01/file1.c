/*write a program to print square of the num if it is even or print cube of the num*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter n value: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Square of the num is:%d",n*n);
    }else
    {
        printf("Cube of the num is:%d",n*n*n);
    }
    return 0;
}