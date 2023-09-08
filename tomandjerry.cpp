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
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        int check=(abs(c-a)+abs(d-b));
        if(k<check){
            cout<<"NO"<<endl;
        }
        else{
            if(k==check){
                cout<<"YES"<<endl;
            }
            else if((k-check)%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}