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
void solve(){   // here,key is that we have to assume n*m rooms as cells of  
    int t;       // a chessboard with alternate colors white and blacks
    cin>>t;
    while(t--){
        int n,m,k,x,y;
        cin>>n>>m>>k;
        cin>>x>>y;
        int flag=1;
        while(k--){
            int a,b;
            cin>>a>>b;
            if((x+y)%2==(a+b)%2){
                flag=0;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}


