#include<bits/stdc++.h>
#include<algorithm>
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
        int n,w;
        cin>>n>>w;
        int daily[n];
        for(int i=0;i<n;i++){
            cin>>daily[i];
        }
        sort(daily, daily+n);
        int sum=0;
        for(int i=n-1;i>=0;i--){
            sum+=daily[i];
            if(sum>=w){
              cout<<i<<endl;
              break;           //here ans is i, bcz let's say that he earned//
            }                  // w money in two days and he had 7 days//
        }                      //(0-6 index)but he did it on day with index//
    }                 //6, then left days are 6(0-5)//                      
}


