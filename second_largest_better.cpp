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
      for(int i=0;i<n;i++){
         cin>>arr[i];
      }
      int largest=INT_MIN;
      for(int i=0;i<n;i++){
         if(arr[i]> largest){
            largest=arr[i];
         }
      }
      int slargest=INT_MIN;
      for(int i=n-2;i>=0;i--){
         if(arr[i]> slargest && arr[i]< largest){
            slargest=arr[i];
         }
      }
      cout<<slargest<<endl;
   }
}