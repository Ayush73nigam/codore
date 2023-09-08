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
        int b;
        cin>>n>>b;
        vector<int> v;
        for(int i=0;i<n;i++){
            int element;
            cin>>element;
            if((element & b)==b){
                v.push_back(element);
            }
        }
        if(v.size()==0){
            cout<<"No"<<endl;
        }
        else{
        int res=v[0];
        for(int i=1;i<v.size();i++){
            res =res & v[i];
        }
        if(res==b){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        }  
    }
}
