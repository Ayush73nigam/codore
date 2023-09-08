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
    int x,n;
    cin>>x>>n;
    int count=0;
    int cur=1;
    if(x==1){
    while (n--)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
             if(s[i]=='0'){
                    count++;
                }
            }
        }
    }
        else{
        while(n--){
        string s;
        cin>>s;
        for(int i=1;i<s.length();i++){
            if(s[i]=='0' && s[i-1]=='0'){
                cur++;
                if(cur>=x){
                    count++;
                }
            }
            else{
                cur=1;
            }
        }
    }
    }
     cout<<count<<endl;
}