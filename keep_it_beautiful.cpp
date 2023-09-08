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
        ll q;
        cin>>q;
        ll arr[q];
        string ans="";
        for(int i=0;i<q;i++){
            cin>>arr[i];
        }
        bool flag=false;
        ll first=-1,last=-1;
        
        for(int i=0;i<q;i++){
            if(flag==false){
                if(first==-1){
                    ans+='1';
                    last=arr[i];
                    first=arr[i];
                }
                else if(arr[i]>=last){
                    ans+='1';
                    last=arr[i];
                }
                else if(arr[i]<=first){
                    ans+='1';
                    flag=true;
                    last=arr[i];
                }
                else{
                    ans+='0';
                }
            }
            else {
                if(arr[i]>=last && arr[i]<=first){
                    ans+='1';
                    last=arr[i];
                }
                else {
                    ans+='0';
                }
            }
        }
        cout<<ans<<endl;
    }
}