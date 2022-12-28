#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("ayush.txt","w");
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            fprintf(fptr,"%d\t",i);
        }
    }
    fclose(fptr);
    return 0;
}