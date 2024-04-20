/*print Alphabetical triangle pattern for n=5*/
#include <stdio.h>
int main()
{
    int n=5;
    int i,j,sp;
    i=1;
    while(i<=5)
    {
        sp=4;
        while(sp>=i)
        {
            printf(" ");
            sp--;
        }
        j=1;
        while(j<=i)
        {
            printf("%c",j+64);
            j++;
        }
        j=j-2;
        while(j>=1){
            printf("%c",j+64);
            j--;
        }
        printf("\n");
        i++;   
    }

}