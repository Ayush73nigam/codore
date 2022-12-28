#include<stdio.h>
#include<math.h>
int function(int x,int n);
int main(){
    int x,n;
    printf("enter the input value for function:");
    scanf("%d",&x);
    printf("enter the frequency of (fof):");
    scanf("%d",&n);
    int s=function(x,n);
    printf("the value of function for %d as input is %d",x,s);
    return 0;
}
int function(int x,int n){
    if(n==1){
        return pow(x,2); 
    }
    int f=pow(function(x,n-1),2);
    return f;
}