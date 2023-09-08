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
        string s,comp="codeforces";
        cin>>s;
        ll count=0;
        for(ll i=0;i<s.size();i++){
            if(s[i]!=comp[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
}