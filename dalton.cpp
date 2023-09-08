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
        ll count=0;
        for(ll i=1;i<=n;i++){
            ll chair;
            cin>>chair;
            if(i==chair){
                count++;
            }
        }
        count? (count%2==1? cout<<(count/2)+1<<endl : cout<<(count/2)<<endl):cout<<0<<endl;
    }
}