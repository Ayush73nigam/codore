#include<bits/stdc++.h>
#define ll long long int
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
    ll t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;

        if(((a==b) || (a[1]==b[1]) && b[1]=='1')){
            cout<<"YES"<<endl;
        }
        else{
            int f=0;
            for(int i=1;i<(a.size()-1);i++){
                if(((a[i]==b[i]) && a[i]=='0') && ((a[i+1]==b[i+1]) && a[i+1]=='1')){
                    f=1;
                    break;
                }
            }
            if(f==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}