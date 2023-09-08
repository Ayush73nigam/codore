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
int longest_subarr(int arr[], int n,int k){
    int mx=0;
    for(int i=0;i<n;i++){
        int sum=0;
        int count=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            count++;
            if(sum==k){
                mx=max(mx,count);
            }
        }
    }
    return mx;
}
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<longest_subarr(arr,n,k)<<endl;
    }
}