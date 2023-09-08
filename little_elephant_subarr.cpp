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
    ll int n;
    cin>>n;
    ll int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll int q;
    cin>>q;
    while(q--){
        int q1;
        cin>>q1;
        ll int count=0;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(arr[i]==q1){
                count++;
                flag=true;
            }
            else if(arr[i]>q1 && flag){
                count+=2;
            }
        }
        cout<<count<<endl;
    } 
}