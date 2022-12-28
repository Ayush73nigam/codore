#include<stdio.h>
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumN=sum(n-1)+n;
    return sumN;
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int res=sum(n);
    printf("the sum of first %d natural numbers is %d",n,res);
    return 0;
}