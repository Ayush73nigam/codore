#include<bits/stdc++.h>              //can throw TLE
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int cur=0;
        int mx=0;
        int sum=0;
        int l=0,r=0;
        while(l<n && r<n){
            sum+=a[r];
            if(sum%2==0){
                cur++;
                mx=max(cur,mx);
                r++;
            }
            else{
                r++;
                l=r;
                sum=0;
                cur=0;
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}                         