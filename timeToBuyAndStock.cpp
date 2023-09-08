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
int BesTime(vector<int> &v){
    int l=v.size();
    int mini=v[0];
    int maxProfit=0;
    for(int i=0;i<l;i++){
        int cost = v[i] - mini;
        maxProfit =max(maxProfit , cost);
        mini = min(mini, v[i]);
    }
    return maxProfit;
}
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v,out;
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            v.push_back(ele);
        }
        cout<<BesTime(v)<<endl;
    }
}