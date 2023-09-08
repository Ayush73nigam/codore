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
vector <int> UnionArr(vector<int> &v1, vector<int> &v2, int n,int m){
    int i=0,j=0;
    vector<int> unionarr;
    while(i<n && j<m){
        if(v1[i]<=v2[j]){
            if(unionarr.back()!=v1[i] || unionarr.size()==0){
                unionarr.push_back(v1[i]);
            }
            i++;
        }
        else{
            if(unionarr.back()!=v2[j] || unionarr.size()==0){
                unionarr.push_back(v2[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(unionarr.back()!=v1[i] || unionarr.size()==0){
            unionarr.push_back(v1[i]);
        }
        i++;  
    }
    while(j<m){
        if(unionarr.back()!=v2[j] || unionarr.size()==0){
            unionarr.push_back(v2[j]);
        }
        j++;    
    }
    return unionarr;
}
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> v1,v2,result;
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
        result=UnionArr(v1,v2,n,m);
        for(int i=0;i<result.size();i++){
            cout<<result[i]<<" ";
        }
        cout<<endl;
    }
}