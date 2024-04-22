#include<stdio.h>
#include<string.h>
struct Employee{
    int empid;
    char empName[20];
    char empG;
    int empPhno;
    float empSal;
    char empDob[20];
};
int main(){
    struct Employee e1,e2,e3,e4,e5,e6,e7,e8,e9,e10;
    printf("choose employee:");
    scanf("%d",& struct Employee);
    printf("Details of employee1:\n");
    e1.empid=12001;
    e1.empG='m';
    e1.empPhno=56478;
    e1.empSal=100500;
    strcpy(e1.empDob,"22 march 1995");
    strcpy(e1.empName,"Mahima");

    printf("Details of employee2:\n");
    e2.empid=12001;
    e2.empG='m';
    e2.empPhno=56478;
    e2.empSal=100500;
    strcpy(e2.empDob,"22 march 1995");
    strcpy(e2.empName,"Mahima");

}