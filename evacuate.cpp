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
        ll int n,m,h;
        cin>>n>>m>>h;
        ll int a[n],b[m];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        for(int i=0;i<m;i++){
            b[i]=h*b[i];
        }
        sort(a,a+n);
        sort(b,b+m);
        ll int energy=0;
        if(m>=n){

            ll int j=0;
            for(int i=n-1;i>=0;i--){
                if(b[m-1-j]>a[i]){
                    energy+= a[i];
                }
                else {
                    energy+= b[m-1-j];
                }
                j++;
            } 
            }
        else {
            ll int j=0;
            for(int i=m-1;i>=0;i--){
                if(a[n-1-j]>b[i]){
                    energy+= b[i];
                }
                else {
                    energy+= a[n-1-j];
                }
                j++;
        }
    }
    cout<<energy<<endl;
    }
}