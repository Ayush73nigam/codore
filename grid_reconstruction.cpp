#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve();
#define io freopen("input.txt", "r",stdin);freopen("output.txt","w",stdout);
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
   io
   #endif
   solve();
   return 0;
}
void solve(){
    ll n,i,t; cin >> t;
    while(cin>>n){
        for(i=0;i<n/2;++i)cout<<2*n-2*i<<' '<<2*i+2<<' ';cout<<endl;
        for(i=0;i<n/2;++i)cout<<2*i+1<<' '<<n+2*i+1<<' ';cout<<endl;
    }
}