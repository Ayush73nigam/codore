#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       ll int n,x;
       cin>>n>>x;
       ll int result=0;
       for(int i=0;i<n;i++){
           ll int s,r;
           cin>>s>>r;
           if(x>=s){
             result=max(result,r);  
           }
       }
       cout<<result<<endl;
    }
    return 0;
}