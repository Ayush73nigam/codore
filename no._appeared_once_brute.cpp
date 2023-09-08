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
int appeared_once(int arr[], int n){
    for(int i=0;i<n;i++){
        int count=0;
        int num=arr[i];
        for(int j=0;j<n;j++){  // using linear search for each element.
            if(arr[j]==num){
                count++;
            }
        }
        if(count==1){
            return num;
        }
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
        cout<<appeared_once(arr, n)<<endl;
    }
}