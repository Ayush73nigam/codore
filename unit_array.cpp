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
        ll n,cntM1=0;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==-1){
                cntM1++;
            }
        }
            if(cntM1>(n/2)){
                if((n/2)%2){
                    cout<<cntM1-(n/2)+1<<endl;
                }
                else{
                    cout<<cntM1-(n/2)<<endl;
                }
            }
            else{
                if(cntM1%2){
                    cout<<1<<endl;
                }
                else{
                    cout<<0<<endl;
                }
            }
    }
}