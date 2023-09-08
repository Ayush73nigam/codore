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
        int n;
        cin>>n;
        int mx=INT_MIN;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mx= max(mx,arr[i]);
        }
        int b[mx+1]={0};
        for(int i=0;i<n;i++){
            b[arr[i]]++;
        }
        int maxcount=INT_MIN;
        for(int i=0;i<=mx;i++){
            maxcount=max(maxcount,b[i]);
        }
        cout<<n-maxcount<<endl;
    }
}