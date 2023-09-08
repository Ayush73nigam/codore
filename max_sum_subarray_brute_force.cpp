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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i1,i2;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            int k;
            for(k=i;k<=j;k++){
                sum+=arr[k];
            }
            if(sum>mx){
                mx=max(mx,sum);
                i1=i;
                i2=--k;
            }
        }
    }
    for(int i=i1;i<=i2;i++){
        cout<<arr[i]<<" ";
    }
}