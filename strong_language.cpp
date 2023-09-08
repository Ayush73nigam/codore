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
bool StrongLanguage(string str,int n,int k){
    int count=0;
    int mx=0;
    for(int i=1;i<n;i++){
        if(str[i]=='*'){
          count++;
          if(count>=k){
            return true;
          } 
        }
        else{
            count=0;
        }
    }
    return false;
}
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;

        if(StrongLanguage(str,n,k)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}