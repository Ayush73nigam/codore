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
#include<map>
void solve(){
    int n,k;
    cin>>n>>k;
    int arr[n+1]={0};
    int count=0;
    while(k--){
        string str;
        cin>>str;
        if(str=="CLICK"){
            int t;
            cin>>t;
            arr[t]++;
            if(arr[t]%2!=0)count++;
            else count--;
        }
        else if(str=="CLOSEALL"){
            count=0;
            for(int i=0;i<=n;i++){
                arr[i]=0;
            }
        }
        cout<<count<<endl;
    }
}