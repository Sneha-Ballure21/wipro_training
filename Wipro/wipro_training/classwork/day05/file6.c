#include<stdio.h>
int main()
    {
    int i=1;
    int sumofeven=0;
    int sumofodd=0;
    while(i<=50)
    {
        if(i%2==0){
            sumofeven=sumofeven+i;

        }
        else{
            sumofodd=sumofodd+i;
        }
        i=i+1;
    }
    printf("\nEvenSum:%d",sumofeven);
    printf("\nOddSum:%d\n",sumofodd);
    return 0;
    printf("\n\n");
}