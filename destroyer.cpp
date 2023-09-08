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
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll maxi=*max_element(arr,arr+n);
        ll hash[maxi+1]={0};
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
        bool check=true;
        for(int i=1;i<=maxi;i++){
            if(hash[i]>hash[i-1]){
                check=false;
            }
        }
        check? cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
}