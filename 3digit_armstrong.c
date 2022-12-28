#include<stdio.h>
int main(){
    int n,arm=0,r,c;
    printf("enter the number to be checked");
    scanf("%d", &n);
    c=n;
    while(n>0)
    {
      r=n%10;
      arm=(r*r*r)+arm;
      n=n/10;
    }
    if(c==arm)
    printf("Armstrong number");
    else
    printf("not");
    return 0;

}