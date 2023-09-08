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
    int l=v.size();
    vector<int> pos,neg;
    for(int i=0;i<l;i++){
        if(v[i]>0){
            pos.push_back(v[i]);
        }
        else{
            neg.push_back(v[i]);
        }
    }
    int x;
    int ps=pos.size();
    int ns=neg.size();
    if(ps>ns){
      for(int i=0;i<ns;i++){
         v[2*i]=pos[i];
         v[2*i+1]=neg[i];
      }
        int j=2*ns;
        for(int i=ns;i<ps;i++){
            v[j]=pos[i];
            j++;
        }

    }
    else{
       for(int i=0;i<ps;i++){
         v[2*i]=pos[i];
         v[2*i+1]=neg[i];
        }
        int j=2*ps;
        for(int i=ps;i<ns;i++){
            v[j]=neg[i];
            j++;
        }  
    }
    return v;
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