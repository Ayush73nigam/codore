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
int unique(int arr[],int n){
    int sumXOR=0;
    for(int i=0;i<n;i++){     
        sumXOR^=arr[i];
    }
    return sumXOR;
}
void solve(){
    int n;         // finding unique number,if except one of them,all are present twice 
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<unique(arr,n)<<endl;
}