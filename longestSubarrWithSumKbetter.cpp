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
#include<vector>
#include<map>
int longest_arr(vector<int> &v ,int k){
    map<ll , int> presum;
    ll sum=0;
    int maxlen=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        if(sum==k){
            maxlen= max(maxlen,i+1);
        }
        ll rem= sum-k;
        if(presum.find(rem)!= presum.end()){
            maxlen= max(maxlen ,i-presum[rem]);
        }
        if(presum.find(sum)== presum.end()){
            presum[sum]= i;
        }
    }
    return maxlen;
}
void solve(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<int> v;
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            v.push_back(ele);
        }
        cout<<longest_arr(v ,k);
    }
}