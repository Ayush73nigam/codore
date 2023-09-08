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
vector<int> SignArrange(vector<int> &v){
    int posIndex=0, negIndex=1;
    int l=v.size();
    vector<int> ans(l);
    for(int i=0;i<l;i++){
        if(v[i]>0){
            ans[posIndex]=v[i];
            posIndex+=2;
        }
        else{
            ans[negIndex]=v[i];
            negIndex+=2;
        }
    }
    return ans;
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
        v=SignArrange(v);
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}