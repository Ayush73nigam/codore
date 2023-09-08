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

int longest_arr(vector<int> &v, int k){
    int maxlen=0;
    int left=0,right=0;
    ll sum=v[0];
    int n=v.size();
    while(right<n){
        while(sum>k && left<=right){
            sum-=v[left];
            left++;
        }
        if(sum==k){
            maxlen= max(maxlen,right-left+1);
        }
        right++;
        if(right<n) sum+=v[right];
    }
    return maxlen;
}
void solve(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector <int> v;
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            v.push_back(ele);
        }
        cout<<longest_arr(v,k)<<endl;
    }
}