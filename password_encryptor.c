#include<stdio.h>
#include<stdlib.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    int n;
    printf("enter any number:");
    scanf("%d",&n);
    int m=n;
    int i=0;
    while(str[i]!='\0'){
        str[i]=str[i]+n;
        n=n%2;
        i++;
    }
    printf("encrypted password:");
    puts(str);
    for(int i=0;str[i]!='\0';i++){
        str[i]=str[i]-m;
        m=m%2;
    }
    printf("dycripted password is:");
    puts(str);
    return 0;
}