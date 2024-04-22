/*given an array A.The task is to find the position where equilibrium first occurs in the array
i/p:7
[-7,1,5,2,-4,3,0]
3
[-7,0,0,0,-4,4,0]
0
[0,0,0,0,-1]
4
output:3*/


#include<stdio.h>
int findEquibrilm(int arr[],int n){
    int sum=0;
    int suml=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];
    
    for(int i=0;i<n;i++){
        sum-=arr[i];
        if(suml==sum)
        return i;
        suml+=arr[i];
    }
    return -1;
}
int main()
{
    int arr[]={-7,1,5,2,-4,3,1};
    int size=7;
    printf("Equilibrium found at:%d\n",findEquibrilm(arr,size));
    return 0;
}
