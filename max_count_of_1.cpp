#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll int n;
        cin>>n;
        string s;
        cin>>s;
        string x1="";
        string x2="";
        x1+='1',x2+='0';
        for(int i=0;i<n-1;i++){
            if(s[i]=='1'){
                if(x1[i]=='1'){
                    x1+='0';
                }
                else{
                    x1+='1';
                }
                if(x2[i]=='1'){
                    x2+='0';
                }
                else{
                    x2+='1';
                }
            }
            else if(s[i]=='0'){
                if(x1[i]=='1'){
                    x1+='1';
                }
                else{
                    x1+='0';
                }
                if(x2[i]=='1'){
                    x2+='1';
                }
                else{
                    x2+='0';
                }
            }
        }
        int c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(x1[i]=='1'){
                c1++;
            }
            if(x2[i]=='1'){
                c2++;
            }
        }
        cout<<max(c1,c2)<<endl;
    }
    return 0;
}