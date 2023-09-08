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

bool possible(ll n,ll m){
    if(n==m) return true;
    if(n<m || (n%3!=0)) return false;

    return possible(n/3,m) || possible(2*n/3,m);
}
void solve(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        possible(n,m) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}