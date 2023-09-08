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
int result(int arr[],int n,int k){
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=i){
                count++;
            }
        }
        if(count==0){
            return arr[n-1]+k+1;
        }
        else if(count<k){
            return arr[n-1]+k+1-count;
        }
        else if(count>=k){
            int b[arr[n-1]+1]={0};
            for(int i=0;i<n;i++){
                b[arr[i]]++;
            }
            ll int cur=k;
            for(int i=0;i<=arr[n-1];i++){
                if(b[i]==0){
                    cur--;
                }
                if(cur<0){
                    return i;
                }
            }
        }
}
void solve(){
    int t;
    cin>>t;
    while(t--){
        ll int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        cout<<result(arr,n,k)<<endl;
    }
}