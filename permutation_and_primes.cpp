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
        for(int i=2;i<=n;i+=2){
            cout<<i<<" ";
        }
        cout<<1<<" ";
        for(int i=n;i>=3;i--){
            if(i%2){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}   