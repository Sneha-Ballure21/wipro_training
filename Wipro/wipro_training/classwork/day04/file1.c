/* write calculator program*/
#include<stdio.h>
int main()
{
    int a,b;
    char c;
    printf("Enter two operands:%d %d",a,b);
    scanf("%d %d",&a,&b);
    printf("Enter operation:\n a.Addition\n b.Subtraction\n c.Multiplication\n d.Division\n ");
    scanf("%c",&c);
    switch(c)
    {
        case 'a':
        printf("Addition:%d",a+b);
        break;
        case 'b':
        printf("Subtraction:%d",a-b);
        break;
        case 'c':
        printf("Multiplication:%d",a*b);
        break;
        case 'd':
        printf("Division:%d",a/b);
        break;
        default:
        printf("Invlalid Operator");
    
    }
    return 0;
}