#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int age[n];
        for(int i=0;i<n;i++){
            cin>>age[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(age[i]>=x){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}