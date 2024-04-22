/*File Management(modes)*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    FILE *fptr= NULL;
    fptr=fopen("test.txt","w");
    if(fptr == NULL)
    {
        printf("\n check the file name");
    }
    else{
    printf("\n File Exists\n");
    }
    return 0;

}