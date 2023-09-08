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
int Moores_voting(int arr[],int n){
    int count=0;
    int current=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]==current){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            current=arr[i+1];
        }
    }
    int cntleft=0;
    for(int i=0;i<n;i++){
        if(arr[i]==current){
            cntleft++;
        }
    }
    if(cntleft> n/2){
        return current;
    }
    else {
        return -1;
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
        cout<<Moores_voting(arr, n)<<endl;
    }
}