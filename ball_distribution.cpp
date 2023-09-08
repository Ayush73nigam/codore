#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int color[m];
        int s=0;
        for(int i=0;i<m;i++){
            cin>>color[i];
            s+= color[i];
        }
        int result1= s%n;
        int result2=s/n;
        if(result2==m){
            cout<<n<<endl;
        }
        else if(result2==(m-1)){
            cout<<result1<<endl;
        }
        else{
            cout<<0<<endl;
        }
        }
    return 0;
}