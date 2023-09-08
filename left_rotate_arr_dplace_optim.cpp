#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve();
#define io freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
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

vector<int> leftRotate(vector<int> &v, int n,int d){   
    int k=d%n;
    reverse(v.begin(), v.begin()+k);     /* this approach will also work for  right rotation */ 
    reverse(v.begin()+k, v.end());         
    reverse(v.begin(), v.end());

    return v;
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
        v=leftRotate(v,n,d);
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}