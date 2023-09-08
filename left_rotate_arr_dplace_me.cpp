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
#include <vector>

vector <int> result(vector <int> &v ,int n,int d){
    int k=d%n;
    vector <int> output;
    for(int i=k;i<n;i++){
        output.push_back(v[i]);
    }
    for(int i=0;i<k;i++){
        output.push_back(v[i]);
    }
    return output;
}
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        vector <int> v;
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            v.push_back(ele);
        }
        v=result(v,n,d);
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}