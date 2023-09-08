#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        int countcol=0,countbrace=0; 
        for(int i=0;i<n;i++){
            if(s[i]==':'){
                if(s[i]==':' && s[i-1]==':'){
                }
                else{
                  countcol++;
                }
            }
            else if(s[i]==')' && countcol==1){
                countbrace++;
            }
            else if(s[i]=='('){
                countcol=0;
                countbrace=0;
            }
            if(countcol==2 && countbrace!=0 && s[i-1]==')'){
                cnt++;
                countbrace=0;
                if(s[i+1]==')'){
                    countcol=1;
                }
                else if(s[i+1]==':'){
                    countcol=1;
                }
                else{
                    countcol==0;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
