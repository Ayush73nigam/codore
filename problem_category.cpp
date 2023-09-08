#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x>=1){
            if(x>=100){
                if(x>=200){
                    cout<<"Hard"<<endl;
                }
                else{
                    cout<<"Medium"<<endl;
                }
            }
            else{
                cout<<"Easy"<<endl;
            }
        }
    }
    return 0;
}