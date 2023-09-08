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
        ll countodd=0;
        while(n--){
            ll element;
            cin>>element;
            if(element%2){
                countodd++;
            }
        }
        countodd % 2 ? cout<<"NO"<<endl : cout<<"YES"<<endl ;
    }
}