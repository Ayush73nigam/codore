#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve();
#define io freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
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
        string s;
        cin>>s;
        ll len= s.length();
        bool check=false;
        for(int i=1;i<len/2;i++){
            if(s[i]!=s[i-1]){
                check=true;
                break;
            }
        }
        check? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}