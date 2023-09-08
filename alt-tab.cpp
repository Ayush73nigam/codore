#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    string out="";
    set <string>st;
    for(int i=n-1;i>=0;i--){
        if(st.find(v[i])==st.end()){
            int l=v[i].length();
            out+= v[i].substr(l-2,2);
            st.insert(v[i]);
        }
    }
    cout<<out<<endl;
    return 0;
}