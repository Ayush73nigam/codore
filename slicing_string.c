#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char arr[100];
    char slice[50];
    int m,n;
    printf("enter the string:");
    scanf("%s",arr);
    printf("enter the starting index of slice:");
    scanf("%d",&n);
    printf("enter the end index of slice:");
    scanf("%d",&m);
    if(n>m){
        int temp;
        temp=n;
        n=m;
        m=temp;
    }
    for(int i=n,j=0;i<=m;i++,j++){
        slice[j]=arr[i];
    }
    puts(slice);
    return 0;
}
