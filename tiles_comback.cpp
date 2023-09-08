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
	int q,n,m,k1,k2,a[200005];
	cin>>q;
	while(q--)
	{
		k1=0,k2=0;
		cin>>n>>m;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
		{
			if(a[i]==a[0]) k1++;
			if(a[i]==a[n-1]&&k1>=m) k2++;
		}
		if(k2>=m||(a[0]==a[n-1]&&k1>=m)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}