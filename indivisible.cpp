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
        ll n;
        cin>>n;
        if(n==1){
            cout<<1<<endl;
        }
        else{
            if(n%2){
                cout<<-1<<endl;
            }
            else{
                for(int i=1;i<n;i+=2){
                    cout<<i+1<<" "<<i<<" ";
                }
                cout<<endl;
            }
        }
    }
}