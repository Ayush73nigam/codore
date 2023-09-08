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
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            v.push_back(ele);
        }
    int b[3];
    for(int i=0;i<n;i++){
        b[v[i]]++;
    }
    for(int i=1;i<3;i++){
        b[i]+=b[i-1];
    }
    for(int i=0;i<b[0];i++){
        v[i]=0;
    }
    for(int i=b[0];i<b[1];i++){
        v[i]=1;
    }
    for(int i=b[1];i<b[2];i++){
        v[i]=2;
    }
    for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
    }
    cout<<endl;
    }
}