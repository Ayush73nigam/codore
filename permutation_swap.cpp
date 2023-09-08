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
        ll n,k;
        cin>>n;
        ll arr[n+1];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        k=abs(arr[1]-1);
        for(int i=2;i<=n;i++){
            k= __gcd(k,abs(arr[i]-i));
        }
        cout<<k<<endl;
    }
}