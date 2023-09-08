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
        ll a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        
        if((d>b && f>b) || (d<b && f<b)){
            if((c>a && e>a) || (c<a && e<a)){
                if(abs(d-b)<=abs(f-b)){
                    if(abs(c-a)<=abs(e-a)){
                        cout<<abs(d-b)+abs(c-a)+1<<endl;
                    }
                    else{
                        cout<<abs(d-b)+abs(e-a)+1<<endl;
                    }
                }
                else{
                    if(abs(c-a)<=abs(e-a)){
                        cout<<abs(f-b)+abs(c-a)+1<<endl;
                    }
                    else{
                        cout<<abs(f-b)+abs(e-a)+1<<endl;
                    }
                }
            }
            else{
                if(abs(d-b)<=abs(f-b)){
                    cout<<abs(d-b)+1<<endl;
                }
                else{
                    cout<<abs(f-b)+1<<endl;
                }
            }
        }
        else {
            if((c>a && e>a) || (c<a && e<a)){
                if(abs(c-a)<=abs(e-a)){
                    cout<<abs(c-a)+1<<endl;
                }
                else{
                    cout<<abs(e-a)+1<<endl;
                }
            }
            else{
                cout<<1<<endl;
            }
        }
    }
}