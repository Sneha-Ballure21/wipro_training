# include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("\nbiggest num:%d\n",a);
    }
    else
    {
        if(b>c)
        {
            printf("\nbiggest num:%d\n",b);
         }
        else
        {
            printf("\nbiggest num:%d\n",c);
        }
    }
    return 0;
    }
