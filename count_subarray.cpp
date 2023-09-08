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
    int i=0,j=1,initial=0,count=n;
    while(i<n && j<n){
        if(arr[j]>arr[i] || arr[j]==arr[i]){
            count++;
            j++;
            i++;
        }
        else{
            count+=j-initial-2;
            i++;
            j++;
            initial=i;
        }
    }
    if(initial<n-1){
        count+=n-2-initial;
    }
    cout<<count<<endl;
    }
}