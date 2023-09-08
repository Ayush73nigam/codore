#include<bits/stdc++.h>
#include<sstream>
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

bool prime(string num){
        stringstream input;
        input<<num;
        ll x=0;
        input>>x;
    ll root= sqrt(x);
    for(ll i=2;i<=root;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
void solve(){
    ll t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        cout<<(str.find("1")>str.find("3") ? 31:13)<<endl;
    }
}