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
    ll int n,k;
    cin>>n>>k;
    ll int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(k==0) k=0;
    else if(k%2==0) k=2;
    else k=1;

    for(int i=0;i<k;i++){
        ll int mx= *max_element(arr,arr+n);
        for(int i=0;i<n;i++){
            arr[i]=mx-arr[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}