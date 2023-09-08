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
void leftRotate(int arr[],int n){
    int resultant[n];
    resultant[0]=arr[n-1];
    for(int i=1;i<n;i++){
        resultant[i]=arr[i-1];
    }
    for(int i=0;i<n;i++){
        arr[i]=resultant[i];
    }
}
void solve(){
    int t,n;
    cin>>t;
    while(t--){
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leftRotate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }
}