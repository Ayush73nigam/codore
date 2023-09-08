#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int w1,w2,x1,x2,m;
        cin>>w1>>w2>>x1>>x2>>m;
        int incre=w2-w1;
        if(incre>=x1*m && incre<=x2*m){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}