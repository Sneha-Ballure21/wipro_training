/*Find a partition point in array
i/p:a[]={4,3,2,5,8,6,7}
o/p:5*/
#include<stdio.h>
int findPartitionpt(int arr[],int size){
    int maxleft[size],minright[size];
    maxleft[0]=arr[0];
    for(int i=1;i<size;i++){
        maxleft[i]=(arr[i]>maxleft[i-1])?arr[i]:maxleft[i-1];

    }
    minright[size-1]=arr[size-1];
    for(int i=size-2;i>=0;i--){
        minright[i]=(arr[i]<maxleft[i+1])?arr[i]:minright[i+1];
        
    }
    for(int i=1;i<size-1;i++){
        if(arr[i]>=maxleft[i-1]&&arr[i]<=minright[i+1]){
            return arr[i];
        }
    }

    return -1;


}
int main()
{
    int arr1[]={4,3,2,5,8,6,7};
    int arr2[]={5,6,2,8,10,9,8};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    printf("point at:%d\n",findPartitionpt(arr1,size1));
    printf("point at:%d\n",findPartitionpt(arr2,size2));
    return 0;
}
