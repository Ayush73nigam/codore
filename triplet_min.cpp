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
        ll int n,q;
        cin>>n>>q;
        ll int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        map<ll int,ll int>mp;
        ll int position=0;
        for(int i=0;i<n-2;i++){
            position+= ((n-1-i)*(n-2-i))/2;
            mp.insert({position,a[i]});
        }
        while(q--){
            ll int query;
            cin>>query;
            cout<<mp.lower_bound(query)->second<<endl;
        }
    }
}