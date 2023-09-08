// 2212010
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int rental[n];
    for(int i=0;i<n;i++){
        cin>>rental[i];
    }
    int bikes=1;
    int limit=k;
    int i;
    if(rental[1]-rental[0]>k){
        cout<<-1<<endl;
        return 0;
    }
    for(i=1;i<n-1;i++){
        if(rental[i]-rental[i-1]>k){
            cout<<-1<<endl;
            break;
        }
        else{
            limit=limit-(rental[i]-rental[i-1]);
            if(limit < (rental[i+1]-rental[i])){
                bikes++;
                limit=k;
            }
            else if(limit==0){
                bikes++;
                limit=k;
            }
            else{
                continue;
            }
        }
    }
    if(i==n-1){
        cout<<bikes<<endl;
    }
}