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
        ll x,k;
        cin>>x>>k;
        if(x%k==0){
            cout<<'2'<<'\n'<<x-1<<" "<<'1'<<'\n';
        }
        else {
            cout<<'1'<<'\n'<<x<<endl;
        }
    }
}