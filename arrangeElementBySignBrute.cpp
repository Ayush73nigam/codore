// arrange elements in alternate order of thier sign, no. of +ve elements= -ve elements

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
void SignArrange(vector<int> &v){
    int l=v.size();
    int x=l/2;
    vector<int> pos, neg;
    for(int i=0;i<l;i++){
        if(v[i]>0){
            pos.push_back(v[i]);
        }
        else{
            neg.push_back(v[i]);
        }
    }
    for(int i=0;i<x;i++){
        v[2*i]=pos[i];
        v[2*i+1]=neg[i];
    }
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
        SignArrange(v);
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}