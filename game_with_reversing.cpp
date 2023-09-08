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
        cin>>n;
        string s,t;
        cin>>s>>t;
        int countF=0,countR=0;
        for(int i=0;i<n;i++){
            if(s[i]!=t[i]){
                countF++;
            }
            if(s[i]!=t[n-i-1]){
                countR++;
            }
        }
        countF= countF%2 ? (2*countF - 1):(2*countF);
        countR= countR%2 ? (2*countR):(countR>0 ? (2*countR - 1):(2));

        int ans= max(min(countF,countR),0);
        cout<<ans<<endl;
    }
}