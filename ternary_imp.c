#include<stdio.h>
int main(){
    if(printf("hello!\n")>0?0:1){
        printf("if block");
    }
    else{
        printf("else block");
    }
    return 0;
}