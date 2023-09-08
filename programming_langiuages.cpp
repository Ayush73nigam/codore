#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(t--){
        int x,y,a1,b1,a2,b2;
        cin>>x>>y>>a1>>b1>>a2>>b2;
        if((x==a1 && y==b1) || (x==b1 && y==a1)){
            cout<<1<<endl;
        }
        else if((x==a2 && y==b2) || (x==b2 && y==a2)){
            cout<<2<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}