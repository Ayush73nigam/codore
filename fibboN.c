#include<stdio.h>
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibN=fib(n-1)+fib(n-2);
    return fibN;
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int res=fib(n);
    printf("the %dth element of fibbo series is %d",n,res);
    return 0;
}