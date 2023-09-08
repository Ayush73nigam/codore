#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll int t;
    cin>>t;
    while(t--){
        ll int x,y;
        cin>>x>>y;
        ll int det=y;
        int incre=1;
        while(det<x){
            if(det>=x){
               break; 
            }
            det+=incre;
            incre++;
        }
        cout<<incre<<endl;
    }
    return 0;
}