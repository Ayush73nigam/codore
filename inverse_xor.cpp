// 2212010
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll int a,b;
        cin>>a>>b;
        ll int result= ((~a)^(~b));
        cout<<result<<endl;
    }
    return 0;
}