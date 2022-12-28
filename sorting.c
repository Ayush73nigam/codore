#include<stdio.h>
int main(){
    int arr[]={7,4,8,0,1,5,2,6};
    for(int i=0;i<7;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i]>arr[j]){
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int k=0;k<8;k++){
        printf("%d\n",arr[k]);
    }
    return 0;
}