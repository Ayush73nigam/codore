#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    float U,V,A,S;
        cin>>U>>V>>A>>S;
        float v=sqrt(U*U-2*A*S);
        if(v<=V || (U*U-2*A*S)<0){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}