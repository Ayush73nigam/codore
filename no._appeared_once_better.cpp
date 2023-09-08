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
int numberAppearedOnce(int arr[], int n){
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }
    int hash[mx+1]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    // for(int i=0;i<=mx;i++){  //this method of checking frequency is correct 
    //     if(hash[i]==1){      // but this can be inefficient,if max value(mx)
    //         return i;      // is some big number. then this will increse
    //     }                 // time complexity to greater extent. so, in that
    // }                    // case we must go through below mentioned approach-

   for(int i=0;i<n;i++){
     if(hash[arr[i]]==1){
        return arr[i];
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
        cout<<numberAppearedOnce(arr,n)<<endl;
    }
}