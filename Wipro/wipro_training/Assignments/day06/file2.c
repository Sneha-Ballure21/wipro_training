/*Given an unsorted array of size N, find a continuous sub-array which adds to a given sum
i/p:7
[1,4,0,0,3,10,5]
sum=7
o/p:sum found between 1 and 4*/
#include<stdio.h>
int main(){
    int arr[]={1,4,0,0,3,10,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=0,j=0, index=7;
    int sum=arr[0];
    int flag=0;
    for(j=1;j<size;j++){
        while(i<j-1 && sum>index){
            sum=sum-arr[i];
            i++;
        }
        if(sum==index){
            printf("Sub array found between %d and %d",i,j-1);
            flag=1;
            break;
        }
        if(j<size)
        sum+=arr[j];
    }
    if(!flag)
    printf("no sub array found");
    return 0;
}