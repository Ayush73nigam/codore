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
bool TwoSumCheck(int arr[], int n, int key){
    sort(arr, arr + n);
    int right = 0,left = n-1;
    while(right < left){
        int sum = arr[right] + arr[left];
        if(sum == key){
            return true;
        }
        else if(sum < key){
            right++;
        }
        else{
            left--;
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