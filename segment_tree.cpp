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
        ll int arr[n+1]={0},sum[n+1]={0};
        for(int i=1;i<n;i++){
            cin>>arr[i];
        }
        ll int incre=0;
        for(int i=1;i<=n;i++){
            sum[i]=arr[i]+(sum[i-1]);
            if(i>=3){
                 ll int r=(sum[i]-sum[i-3])%3;
                if(r!=0){
                    incre+=(3-r);
                    sum[i]=sum[i]+3-r;
                }
            }
        }
        cout<<incre<<endl;
    }
}