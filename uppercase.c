#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    if(isupper(ch)){
        printf("character is in uppercase.");
    }
    else{
        printf("character is in lowercase.");
    }
    return 0;
}