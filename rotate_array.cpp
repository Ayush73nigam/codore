#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int k;
    cout<<"enter k:";
    cin>>k;
    int ans_arr[5];
    k=k%5;
    int j=0;
    for(int i=5-k;i<5;i++){
        ans_arr[j++]=arr[i];
    }
    for(int i=0;i<k;i++){
        ans_arr[j++]=arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<ans_arr[i]<<" ";
    }
    return 0;
}