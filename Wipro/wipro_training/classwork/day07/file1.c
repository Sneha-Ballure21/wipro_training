/*Demo on pointers*/
#include <stdio.h>
int main(){
    int qty=100;
    int *ptr;
    printf("Adrress of qty=%u and its value=%d\n",&qty,qty);
    printf("Address of ptr=%u and its value=%u\n",&ptr,ptr);
    ptr=&qty;
    printf("Adrress of qty=%u and its value=%d\n",&qty,qty);
    printf("Address of ptr=%u and its value=%u\n",&ptr,ptr);
    return 0;

}