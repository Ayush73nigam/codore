#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve();
#define io freopen("input.txt", "r",stdin);freopen("output.txt","w",stdout);

bool check(int arr[],int n){
    for(int i=0;i<(n/2);i++){
        if(arr[i]!=arr[n-i-1]){
            return false;
        }
    }
    return true;
}
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
        bool flagA=true;
        int c=1;
        for(int i=0;i<n;i++){
            if(arr[i]>7){
                flagA==false;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]>c && arr[i]==(c+1)){
                c++;
            }
            else if(arr[i]>c && arr[i]!=(c+1)){
                flagA=false;
                break;
            }
            else if(arr[i]>7){
                flagA=false;
                break;
            }
            else if(arr[i]<c && c<7){
                flagA=false;
                break;
            }
        }
        if(flagA==false || (c<7)){
            cout<<"no"<<endl;
        }
        else{
            if(check(arr,n)){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"no"<<endl;
            }
        }
    }
}