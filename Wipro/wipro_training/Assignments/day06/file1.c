/*rotate every kth element
i/p: 1 2 3 4 5 6 7 8 9
k=4
o/p:4 3 2 1 8 7 6 5 9*/
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int k=4;
    int i;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<size;i=i+k){
        int first=i;
        int last;
        if(i+k-1<size-1){
            last=i+k-1;
        }
        else{
            last=size-1;
        }
        while(first<last){
            int temp=arr[first];
            arr[first]=arr[last];
            arr[last]=temp;
            first=first+1;
            last=last+1;

        }
    }
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
    }

}
