/*functional Calculator program*/
#include<stdio.h>
float add(float op1,float op2){
    return op1+op2;
}
float subtract(float op1,float op2){
    return op1-op2;
}
float multiply(float op1,float op2){
    return op1*op2;
}
float divide(float op1,float op2){
    return op1/op2;
}
int main(){
    float a,b;
    char operation;
    float res;
    printf("Enter first operand: ");
    scanf("%f",&a);
    printf("Enter second operand: ");
    scanf("%f",&b);
    printf("Enter operation want to perform(+ - * /): ");
    scanf("%c",&operation);
    switch(operation){
        case '+':
             res=add(a,b);
             break;
        case '-':
             res=subtract(a,b);
             break;
        case '*':
             res=multiply(a,b);
             break;
        case '/':
             res=divide(a,b);
             break;
        default:
            printf("Invalid operation\n");


    }
    printf("result is:%f\n",res);
    return 0;
    
}