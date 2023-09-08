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
int maximum_difference_bit(long long &a,long long &b){
    for(int i=30;i>=0;i--){
        long long cur= 1ll<<i;
        if((cur & a) && !(cur & b)){
            return i;
        }
    }
}
void solve(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long result=0;
        if(c>b && b>a){
            cout<<0<<endl;
        }
        else if(a==b || b==c || c==a){
            cout<<-1<<endl;
        }
        else{
            if(a>b){
                result=(1ll<< maximum_difference_bit(a,b));
            }
            if(b>c){
                result= result| (1ll<<maximum_difference_bit(b,c));
            }
            if((a^result)<(b^result) && (b^result)<(c^result)){
                cout<<result<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
}  