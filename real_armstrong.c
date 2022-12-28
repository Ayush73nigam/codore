#include<stdio.h>
#include<math.h>
int main(){
    int n,m,k,u,x=0,s;
    double sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    m=n;
    u=n;
    while(n>0){
       k=n%10;
       x++;
       n=n/10; 
    }
    while(m>0){
        s=m%10;
        sum=sum+ pow(s,x);
        m=m/10;
    }
    if(sum==u){
        printf("you entered an armstrong number.");
    }
    if(sum!=u){
        printf("you entered a non armstrong number.");
    }
    return 0;
}