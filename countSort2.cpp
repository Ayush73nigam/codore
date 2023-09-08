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
void countSort(int arr[],int n){
    int mx=arr[0];
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }
    int index[mx+1]={0};
    for(int i=0;i<n;i++){
        index[arr[i]]++;
    }
    for(int i=1;i<=mx;i++){
        index[i]+= index[i-1];
    }
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--index[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }
}
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        countSort(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}