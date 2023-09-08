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
        int n;
        cin>>n;
        ll int arr[n];
        int op=0;
        set<int> st;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(st.count(arr[i])) op++;
            else st.insert(arr[i]);
        }
        cout<<op<<endl;
    }
}