#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll int t;
    cin>>t;
    while(t--){
        ll int n,k;
        cin>>n>>k;
        if(k==0)
        cout<<n<<endl;
        else
        cout<<n%k<<endl;
    }
    return 0;
}