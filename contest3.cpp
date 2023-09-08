#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map <string,int> mp;
        for(int i=0;i<n;i++){
            string group;
            cin>>group;
            mp[group]++;
        }
        int chain=0;
        if(mp.find("O")!=mp.end()){
            chain+=mp["O"];
        }
        if(mp.find("A")!=mp.end() && mp.find("B")==mp.end()){
            chain+=mp["A"];
        }
        if(mp.find("A")==mp.end() && mp.find("B")!=mp.end()){
            chain+=mp["B"];
        }
        if(mp.find("A")!=mp.end() && mp.find("B")!=mp.end()){
            if(mp["A"]>mp["B"]){
                chain+=mp["A"];
            }
            else{
                chain+=mp["B"];
            }
        }
        if(mp.find("AB")!=mp.end()){
            chain+=mp["AB"];
        }
        cout<<chain<<endl;
    }
    return 0;
}