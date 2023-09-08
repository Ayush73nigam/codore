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
        string first,other;
        cin>>first;
        ll left_member=n;
        for(int i=2;i<=n;i++){
            cin>>other;
            if(first!=other){
                left_member--;
            }
        }
        cout<<left_member<<endl;
    }
}