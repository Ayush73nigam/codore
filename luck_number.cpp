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
    ll t;
    cin>>t;
    while(t--){
        ll s,e;
        cin>>s>>e;
        ll mx=-1,mn=1e9,overallmx=-1,diff=-1;
        for(ll i=s;i<=e;i++){
            ll x=i;
            while(x){
                mx=max(mx,x%10);
                mn=min(mn,x%10);
                diff=mx-mn;
                x=x/10;
            }
        }
    }
}