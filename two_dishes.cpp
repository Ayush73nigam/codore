#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int t2=n;
        int t1=0;
        while(t1<=n && t2<=n){
            if(t1+t2>s){
                t2--;
            }
            else{
                if(t1+t2==s){
                    cout<<t2-t1<<endl;;
                    break;
                }
                else if(t1+t2<s){
                    t1++;
                }
            }
        }
    }
    return 0;
}