#include<bits/stdc++.h>
#define ll long long
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
    char x,y;
    cin>>x>>y;
    if(x<y){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
    }
}