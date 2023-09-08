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
        int arr[n+1]={0};
        int score[n+1]={0};
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n+1);
        for(int i=1;i<=n;i++){
            arr[i]+=arr[i-1];
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                if(j==i){
                cout<<arr[n]-arr[j-1]<<" ";
                }
            }
        }
        cout<<endl;
    }
}