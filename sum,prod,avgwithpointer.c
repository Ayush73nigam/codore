#include<stdio.h>
void result(int a,int b,int *sum,int *prod,int *avg);
int main(){
    int a=4,b=6;
    int sum,prod,avg;
    result(a,b,&sum,&prod,&avg);
    printf("the sum,prod and avg are respectively %d,%d and %d",sum,prod,avg);
    return 0;
}
void result(int a,int b,int *sum,int *prod,int *avg){
    *sum=a+b;
    *avg=(a+b)/2;
    *prod=a*b;
}