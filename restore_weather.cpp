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
        cin>>n>>k;
        pair<int,int> p[100005];
        ll a[n],b[n],out[n];
        for(int i=0;i<n;i++){
            cin>>p[i].first;
            p[i].second=i;
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(p,p+n);
        sort(b,b+n);
        for(int i=0;i<n;i++){
            out[p[i].second]=b[i];
        }
        for(int i=0;i<n;i++){
            cout<<out[i]<<" ";
        }
        cout<<endl;
    }
}