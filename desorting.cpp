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
        ll n;
        cin>>n;
        int a,b,mn=1e9;
        cin>>a;
        for(ll i=1;i<n;i++){
            cin>>b;
            mn=min(mn,b-a);
            a=b;
        }
        cout<< max(0, (mn+2)/2) <<endl;
    }
}