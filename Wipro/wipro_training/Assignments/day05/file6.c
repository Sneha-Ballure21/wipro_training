/*print the sum of even and sum of odd values between 1 to 50*/
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
    printf("\nSum of Even numbers:%d",sumofeven);
    printf("\nSum of odd numbers:%d\n",sumofodd);
    return 0;
    printf("\n\n");
}