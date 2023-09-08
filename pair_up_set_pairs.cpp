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
#include<set>
void solve(){
    int n;
    cin>>n;
    set <pair<string,string>> st;
    for(int i=0;i<n;i++){
        string st1,st2;
        cin>>st1>>st2;
        if(st1>st2){
            swap(st1,st2);
        }
        st.insert({st1,st2});
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        string s1,s2;
        cin>>s1>>s2;
        if(s1>s2){
            swap(s1,s2);
        }
        if(st.count({s1,s2})){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
}