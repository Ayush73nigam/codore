#include<stdio.h>
int gcd(int a,int b){
    int div_a[a]={0};
    int div_b[b]={0};
    for(int i=1;i<=a;i++){
        if(a%i==0){
            div_a[i]=i;
        }
    }
    for(int j=1;j<=b;j++){
        if(b%j==0){
            div_b[j]=j;
        }
    }
    int var=0;
    if(a>b){
        var=b;
    }
    if(b>a){
        var=a;
    }
    if(a==b){
        var=a;
    }
    int gcd=0;
    for(int i=1;i<=var;i++){
        if((div_a[i]==div_b[i])&& (div_a[i]!=0)){
            gcd=i;
        }
    }
    return gcd;
}
int main(){
    int a,b;
    printf("enter the first_number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    int s=gcd(a,b);
    printf("the gcd of %d and %d is %d",a,b,s);
    return 0;
}