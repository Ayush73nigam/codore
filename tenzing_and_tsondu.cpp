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
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        ll int a[n];
        ll int b[m];
        ll int sumA=0,sumB=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sumA+= a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            sumB+= b[i];
        }
        if(sumA>sumB){
            cout<<"Tsondu"<<endl;
        }
        else if(sumB>sumA){
            cout<<"Tenzing"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }
    }
}