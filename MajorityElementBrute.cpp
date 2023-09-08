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
int MajorityElement(int arr[],int n){
    int countMax=INT_MIN;
    for(int i=0;i<n;i++){
        int countcur=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                countcur++;
            }
            countMax=max(countMax , countcur);
            if(countMax> n/2){
                return arr[i];
            }
        }
    }
    return -1;
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
        cout<<MajorityElement(arr, n)<<endl;
    }
}