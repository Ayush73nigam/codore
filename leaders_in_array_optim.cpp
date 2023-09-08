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
        vector<int> v,ans;
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            v.push_back(ele);
        }
        ans.push_back(v[n-1]);
        int mx= v[n-1];
        for(int i=n-2;i>=0;i--){
            if(v[i]>mx){
                ans.push_back(v[i]);
                mx=v[i];
            }
        }
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}