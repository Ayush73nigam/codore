#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve();
#define io freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
   io
   #endif
   solve();
   return 0;
}

void solve(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int sum=a+b;
        int count=0;
        while(sum>0){
            int r=sum%10;
            if(r==0 || r==6 || r==9){
                count+=6;
            }
            else if(r==2 || r==3 || r==5){
                count+=5;
            }
            else if(r==1){
                count+=2;
            }
            else if(r==8){
                count+=7;
            }
            else if(r==4){
                count+=4;
            }
            else{
                count+=3;
            }
            sum=sum/10;
        }
        cout<<count<<endl;
    }
}