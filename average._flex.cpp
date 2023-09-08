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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int greater=0;
        int equal=1;
        for(int i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1] && greater<=n/2){
                greater++;
                greater= greater-1+equal;
                equal=1;
            }
            if(arr[i]==arr[i+1]){
                equal++;
            }
        }
        if(equal>1){
            greater+=equal;
        }
        cout<<greater<<endl;
    }
}