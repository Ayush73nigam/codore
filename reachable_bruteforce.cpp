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
#include <set>
void solve(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        set <int> st;
        for(int i=l;i<=r;i++){
            for(int j=l;j<=r;j++){
                st.insert(i+j);
            }
        }
    cout<<st.size()<<endl;
    }
}