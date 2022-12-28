#include<stdio.h>
void reverse(char str[],int s,int e){
    char str2[100];
    int j=0;
    for(int i=e+1;str[i]!='\0';i++){
        str2[j++]=str[i];
    }
    for(int i=s;i<=e;i++){
        str2[j++]=str[i];
    }
    for(int i=0;i<=s-1;i++){
        str2[j++]=str[i];
    }
    str2[j]='\0';
    printf("%s",str2);
}
int main(){
    char str[]="i love you";
    int s=1;
    int e=6;
    reverse(str,s,e);
    return 0;
}