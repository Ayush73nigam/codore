#include<stdio.h>
int main(){
    int number,tnum,result;
    tnum=number;
    result=0;
    printf("enter the number:");
    scanf("%d",&number);
    while(tnum!=1){
        if(tnum % 2!=0){
            result=1;
            break;
        }
        tnum=tnum/2;
    }
    if(result==0){
        printf("%d is a power of 2\n",number);
    }
    else{
        printf("%d is not a power of 2\n",number);
    }
    return 0;
}