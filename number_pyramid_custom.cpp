#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int i,j,k,m;
    for(i=1;i<=n;i++){
        for(j=n-i;j>0;j--){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<k;
        }
        for(m=i-1;m>0;m--){
            cout<<m;
        }
        cout<<endl;
    }
    return 0;
}