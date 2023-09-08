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
        int n;
        cin>>n;
        ll int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n==1){
            cout<<arr[0]<<endl;
        }
        else{
        for(int i=1;i<n;i++){
            arr[i]=arr[i]+arr[i-1];
        }
        ll int mn=LLONG_MAX,mx=-1;
        for(int i=0;i<n;i++){
            mx=max(arr[n-1]-arr[i],arr[i]);
            mn=min(mn,mx);
        }
        cout<<mn<<endl;
        }
    }
}