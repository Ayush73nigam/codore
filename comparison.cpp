#include<bits/stdc++.h>
#define ll long long int
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
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll mxCnt=1,curGreat=1,curLess=1;
        for(int i=0;i<n;i++){
            if(s[i]=='>'){
                curGreat++;
                mxCnt=max(mxCnt,curGreat);
                curLess=1;
            }
            else{
                curLess++;
                mxCnt=max(mxCnt,curLess);
                curGreat=1;
            }
        }
        cout<<mxCnt<<endl;
    }
}