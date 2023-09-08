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
#include<set>
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set <int> st;
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            st.insert(ele);
        }
        cout<<st.size()<<endl;
    }
}