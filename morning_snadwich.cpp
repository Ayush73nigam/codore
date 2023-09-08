#include<bits/stdc++.h>
#define ll long long int
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
void solve(){
    int t,b,c,h;
    cin>>t;
	while(t--){
		cin>>b>>c>>h;
		cout<<min(b*2-1,(c+h)*2+1)<<"\n";
	}
}