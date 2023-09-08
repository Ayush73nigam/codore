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
bool TwoSumCheck(int arr[], int n,int key){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==key){
                return true;
            }
        }
    }
    return false;
}
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,key;
        cin>>n>>key;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(TwoSumCheck(arr,n,key)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}