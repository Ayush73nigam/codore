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
        int n,m,h;
        cin>>n>>m>>h;
        vector<int,
        while(n--){
            vector<int> v(m);
            for(int i=0;i<m;i++){
                cin>>v[i];
            }
            sort(v.begin(),v.end());
            ll int sum=0;
            int point=0;
            for(int i=1;i<m;i++){
                v[i]+=v[i-1];
                if(v[i]<=120){
                    point++;
                    sum+=v[i];
                }
            }
        }
    }
}