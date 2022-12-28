#include<stdio.h>
int main(){
    int a=1;
    int b=a++ +a++ +a++;
    printf("a=%d and b=%d",a,b);
    return 0;
}
