#include<iostream>
using namespace std;
int main(){
    int arr[]={21,12,11,43,34,32,41,43,43};
    int max=arr[0];
    int n=0;
    for(int i=0;i<9;i++){
        if(arr[i]>max){
            n=i;
        }
    }
    for(int i=0;i<9;i++){
        if(arr[i]==arr[n]){
            arr[i]=0;
        }
    }
    for(int i=0;i<9;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"the second largest number in the array is "<<max;
    return 0;
}