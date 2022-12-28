#include<stdio.h>
typedef struct bankaccount{
    int accountno;
    char name[100];
}acc;
int main(){
    acc a1={123,"ayush"};
    acc c2={122,"karan"};
    printf("the first person's account detailes: accountno-%d,name-%s\n",a1.accountno,a1.name);
    printf("second person's account details: accountno-%d,name-%s",c2.accountno,c2.name);
    return 0;
}
