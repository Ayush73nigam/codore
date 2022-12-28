#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
            printf("%d\t",arr[i][n-i-1]);
    }
    return 0;
}