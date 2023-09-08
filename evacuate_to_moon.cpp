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
void solve(){
   int t;
   cin>>t;
   while(t--){
      int a,b;
      cin>>a>>b;
      if(b>a){
         if(b>2*a){
            cout<<2*a<<endl;
         }
         else{
            cout<<a+b<<endl;
         }
      }
      else{
         if(a>2*b){
            cout<<2*b<<endl;
         }
         else{
            cout<<a+b<<endl;
         }
      }
   }
}