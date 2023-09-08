#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll int t;
    cin>>t;
    while(t--){
       ll int n,k;
       cin>>n>>k;
       string s;
       cin>>s;
       ll int count=k;
       if(s[0]=='0'){
        s[0]='1';
        count--;
        for(int i=0;i<count;i++){
            s+='0';
        }
       }
        else{
            for(int i=0;i<k;i++){
                s+='0';
            }
        }
       cout<<s<<endl;
    }
    return 0;
}