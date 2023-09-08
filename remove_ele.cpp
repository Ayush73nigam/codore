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
    int t;
    cin>>t;
    while(t--){
        ll int n,k;
        cin>>n>>k;
        ll int arr[n];
        ll int least=INT_MAX, mx=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            least=min(least,arr[i]);
            mx=max(mx,arr[i]);
        }
        (mx+least)<=k ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}