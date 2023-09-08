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
        string s;
        cin>>s;
        if(k%2){
            vector<char> odd,even;
            for(ll i=0;i<n;i++){
                if(i%2){
                    odd.push_back(s[i]);
                }
                else{
                    even.push_back(s[i]);
                }
            }
            sort(even.begin(),even.end());
            sort(odd.begin(),odd.end());
            ll x=0,y=0;
            for(ll i=0;i<n;i++){
                if(i%2){
                    s[i]=odd[x++];
                }
                else{
                    s[i]=even[y++];
                }
            }
        }
        else{
            sort(s.begin(),s.end());
        }
        cout<<s<<endl;
    }
}