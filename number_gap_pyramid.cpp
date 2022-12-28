#include<iostream>
using namespace std;
 int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            if(k==1 || k==2*i-1){
                cout<<i;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
 }