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
bool comp(pair<ll,ll> p, pair<ll,ll> q){
    if(p.first!=q.first){
        return p.first>q.first;
    }
    else{
        return p.second<q.second;
    }
}
void solve(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<pair<ll,ll>> v;
        for(ll i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%k==0){
                cout<<i+1<<" ";
            }
            else{
                v.push_back(make_pair((x%k),i+1));
            }
        }
        sort(v.begin(),v.end(),comp);
        for(auto it:v){
            cout<<it.second<<" ";
        }
        cout<<endl;
    }
}