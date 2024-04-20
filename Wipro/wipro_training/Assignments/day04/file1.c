/*print employee details*/
#include<stdio.h>
int main()
    {
    int no,phno,id;
    char name[20],addr[50];
    char gender;
    float salary;
    printf("Enter no, id, name, gender, salary, phno, addr:");
    scanf("%d %d %s %c %f %ld %s,&no,&id,name,&gender,&salary,phno,addr");
    printf("================================================\n");
    printf("                 EMPLOYEE DETAILS\n");
    printf("================================================\n");
    printf("no   id    name    gender    salary    phno    addr\n");
    printf("---- ---   -----   -------   -------   ----    -----");
    return 0;

}