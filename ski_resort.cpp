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
int fact(int f){
    if(f==1){
        return 1;
    }
    int factF=fact(f-1)*f;
    return factF;
}
int comb(int sup,int sub){
    ll int combinations= fact(sup)/(fact(sup-sub)*fact(sub));
    return combinations;
}
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        ll int ways=0;
        int count=0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if(temp<=q){
                count++;
            }
            else{
                count=0;
            }
            if(count>=k){
                ways+=(count-k+1);
            }
        }
        cout<<ways<<endl;
    }
}