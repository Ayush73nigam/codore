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
void MoveZeroToEnd(int arr[],int n){
    int temp[n];
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp[index++]= arr[i];
        }
    }
    for(int i=0;i<index;i++){
        arr[i]=temp[i];
    }
    for(int i=index;i<n;i++){
        arr[i]=0;
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
        MoveZeroToEnd(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}