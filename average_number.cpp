#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,v;
        cin>>n>>k>>v;
        int sumN=0;
        for(int i=0;i<n;i++){
            int element;
            cin>>element;
            sumN+=element;
        }
        int sum=(n+k)*v;
        if((sum-sumN)%k==0 && (sum>sumN)){
            cout<<(sum-sumN)/k<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}