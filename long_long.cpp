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
        ll int n,sum=0,cnt=0,cur=0;
        cin>>n;
        ll int arr[200000];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+= abs(arr[i]);
        }
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                cur=1;
            }
            else if(arr[i]>0){
                cnt+= cur;
                cur=0;
            }
        }
        cnt+= cur;
        cout<<sum<<" "<<cnt<<endl;
    }
}