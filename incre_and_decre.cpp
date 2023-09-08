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
        ll x,y,n;
        cin>>x>>y>>n;
        ll arr[n+1]={0};
        arr[n]=y;
        arr[1]=x;
        int i;
        for(i=n-1;i>=2;i--){
            arr[i]=arr[i+1]-(n-i);
            if((x>arr[i]) || x==arr[i]){
                cout<<-1<<endl;
                break;
            }
        }
        if(i==1){
            if((arr[2]-arr[1]>(n-2))){
               for(int i=1;i<=n;i++){
                  cout<<arr[i]<<" ";
               }
            }
            else{
                cout<<-1;
            }
            cout<<endl;
        }
    }
}