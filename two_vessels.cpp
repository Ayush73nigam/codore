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
        ll a,b,c;
        cin>>a>>b>>c;
        ll diff= abs(a-b);
        ll check=(diff/(2*c));
        if(diff==0){
            cout<<0<<endl;
        }
        else{
            if(check==0){
                cout<<1<<endl;
            }
            else{
            cout<<(diff%(2*c) ? check+1 : check)<<endl;
            }
        }
    }
}