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
        ll n,q;
        cin>>n>>q;
        ll arr[n+1]={0},sum[n+1]={0};
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            sum[i]=sum[i-1]+arr[i];
        }
        while(q--){
            ll l,r,k;
            cin>>l>>r>>k;
            ll cursum=sum[n] + (r-l+1)*k - (sum[r]-sum[l-1]);
            
            if(cursum%2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}