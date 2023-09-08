#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve();
#define io freopen("input.txt", "r",stdin);freopen("output.txt","w",stdout);
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
   io
   #endif
   solve();
   return 0;
}
int fact(int n){
    if(n==1){
        return 1;
    }
    int factN=fact(n-1)*n;
    return factN;
}
void solve(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
}