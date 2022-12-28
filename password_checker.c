#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int least(int uc,int lc,int sc,int digit){
    if(uc<lc && uc<sc && uc<digit){
        return uc;
    }
    if(lc<sc && lc<digit){
        return lc;
    }
    if(sc<digit){
        return sc;
    }
    return digit;
}
int main(){
    char passw[100];
    printf("enter the password:");
    fgets(passw,100,stdin);
    int l;
    int uc=0,lc=0,digit=0,sc=0;
    for(int i=0;i<passw[i]!='\0';i++){
        if(passw[i]>='A' && passw[i]<='Z'){
            uc++;
        }
        if(passw[i]>='a' && passw[i]<='z'){
            lc++;
        }
        if(passw[i]>=48 && passw[i]<=57){
            digit++;
        }
        if((passw[i]>=32 && passw[i]<=47)||(passw[i]>=58 && passw[i]<=64)||(passw[i]>=91 && passw[i]<=96)||(passw[i]>=123 && passw[i]<=126)){
            sc++;
        }
    }
    int lowest=least(uc,lc,sc,digit);
    if(lowest>=2){
        printf("password is valid and strong\n");
    }
    if(lowest<2){
        printf("password is invalid and weak\n");
    }
    return 0;
}