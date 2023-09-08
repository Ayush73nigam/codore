#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve();
#define loop(n) for(int i=0;i<n;i++);
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
#include<set>
vector<int> unionArr(vector<int> &v1, vector<int> &v2, int n, int m){
    set <int> st;
    for(int i=0;i<n;i++){
        st.insert(v1[i]);
    }
    for(int i=0;i<m;i++){
        st.insert(v2[i]);
    }
    vector<int> result;
    for(auto it:st){
        result.push_back(it);
    }
    return result;
}
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v1;
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            v1.push_back(ele);
        }
        int m;
        cin>>m;
        vector<int> v2, unionarray;
        for(int i=0;i<m;i++){
            int ele;
            cin>>ele;
            v2.push_back(ele);
        }
        unionarray= unionArr(v1, v2, n,m);
        
        for(auto it:unionarray){  // 'it' represent each element of unionarray
            cout<<it<<" ";       // here  it is not itself a iterator
        }                        // 'it' is iterator if auto it=st.begin() or 
        cout<<endl;              // something like index is assigned to it.
    }
}