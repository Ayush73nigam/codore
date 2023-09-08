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
        int arr[n];
        int hash[200000]={0};
        int cur=0;
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(hash[arr[i]]==0){
                cur++;
                mx=max(mx,cur);
            }
            else if(hash[arr[i]]%2==1){
                cur--;
            }
            else if(hash[arr[i]]%2==0){
                cur++;
                mx=max(mx,cur);
            }
            hash[arr[i]]++;
        }
        cout<<mx<<endl;
    }
}