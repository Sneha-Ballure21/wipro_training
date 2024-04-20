/* take input age from user and print whether they are eligible for vote or not*/
#include<stdio.h>
int main(){
    int age;
    printf("Enter age of the person:");
    scanf("%d",&age);
    if(age<18){
        printf("Category:minor\n");
        printf("not eligible to vote\n");
    }else{
        if(age>=18&&age<=65){
            printf("Category:adult\n");
            printf("Eligible to vote\n");
        }
        else{
            printf("Category:Senior\n");
            printf("Eligible to vote\n");
        }
        }
        
        return 0;
    }
