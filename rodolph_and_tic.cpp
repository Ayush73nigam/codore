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
bool check(vector<string> &s ,char ch){
    for(int i=0;i<3;i++){
        if(s[0][i]==ch && s[1][i]==ch && s[2][i]==ch){
            return true;
        }
    }
    for(int j=0;j<3;j++){
        if(s[j][0]==ch && s[j][1]==ch && s[j][2]==ch){
            return true;
        }
    }
    if(s[0][0]==ch && s[1][1]==ch && s[2][2]==ch){
        return true;
    }
    if(s[0][2]==ch && s[1][1]==ch && s[2][0]==ch){
        return true;
    }
    return false;
}
void solve(){
    int t;
    cin>>t;
    while(t--){
       vector<string> s(3);
       for(int i=0;i<3;i++){
        cin>>s[i];
       }
       if(check(s,'O')){
        cout<<'O'<<endl;
       }
       else if(check(s,'X')){
        cout<<'X'<<endl;
       }
       else if(check(s,'+')){
        cout<<'+'<<endl;
       }
       else{
        cout<<"DRAW"<<endl;
       }
    }
}