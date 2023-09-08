#include<bits/stdc++.h>
#define ll long long
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
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        if(n==1 && m==1){
            cout<<0<<endl;
        }
        else if((n==1 && m>1) || (n>1 && m==1)){
            cout<<k<<endl;
        }
        else if(k==1){
            cout<<k<<endl;
        }
        else{
            cout<<k/2<<endl;
        }
    }
}