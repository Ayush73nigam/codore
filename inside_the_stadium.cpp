#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        int sum=0;
        for(int i=1;i<=n;i++){
            int run;
            cin>>run;
            sum+=run;
            if(sum==i){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}