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

vector <int> intersect(vector<int> &v1, vector<int> &v2, int n, int m){
    int i=0;
    int j=0;
    vector<int> interarr;
    while(i<n && j<m){
        if(v1[i]<v2[j]){
            i++;
        }
        else if(v2[j]<v1[i]){
            j++;
        }
        else{
            interarr.push_back(v1[i]);
            i++;
            j++;
        }
    }
    return interarr;
}
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v1,v2,ans;
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            v1.push_back(ele);
        }
        int m;
        cin>>m;
        for(int i=0;i<m;i++){
            int ele;
            cin>>ele;
            v2.push_back(ele);
        }
        ans= intersect(v1, v2, n, m);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}