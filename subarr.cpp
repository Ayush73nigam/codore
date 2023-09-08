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
        vector<int> v;
        ll int sum=0;
        int cnt=0;
        int cur=1;
        ll int i;
        for(i=1;i<1000000000;i++){
            if(cnt==n){
                break;
            }
            if(((i+sum)%cur==0)){
                sum+=i;
                cnt++;
                cur++;
                v.push_back(i);
            }
        }
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}