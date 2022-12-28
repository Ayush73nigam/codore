#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("ayush.txt","w");
    char name[100];
    printf("enter your name:");
    scanf("%s",name);
    fprintf(fptr,"%s\n",name);
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    fprintf(fptr,"%d\n",age);
    float cgpa;
    printf("enter the cgpa:");
    scanf("%f",&cgpa);
    fprintf(fptr,"%f\n",cgpa);
    fclose(fptr);
    return 0;
}