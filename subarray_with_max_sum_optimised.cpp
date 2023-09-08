#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve();
#define io freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
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
    int i=0,j=0;
    int i1,i2;
    int mx=0;
    int sum=0;
    while(i<n && j<n){
        sum+=arr[j];
        if(sum>mx){
            mx=max(mx,sum);
            i1=i;
            i2=j;
            j++;
        }
        else{
            sum=0;
            j++;
            i=j;
        }
    }
    for(int k=i1;k<=i2;k++){
        cout<<arr[k]<<endl;
    }
}