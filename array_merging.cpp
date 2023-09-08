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
        ll a[n],b[n],mxA,mxB,mx;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
 
        ll hash[2*n+5]={0};
        for(int i=0;i<n;i++){
            hash[a[i]]++;
        }
        for(int i=0;i<n;i++){
            hash[b[i]]++;
        }
        cout<<(*max_element(hash,hash+2*n+5))<<endl;
    }
}
