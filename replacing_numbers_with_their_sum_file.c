#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("ayush.txt","r");
    int a,b;
    fscanf(fptr,"%d",&a);
    fscanf(fptr,"%d",&b);
    fptr=fopen("ayush.txt","w");
    int sum=a+b;
    fprintf(fptr,"%d",sum);
    fclose(fptr);
    return 0;
}