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
	int t;
	cin>>t;
	while(t--){
		int n, lb=0, lc=0;
		cin>>n;
		int a[n], b[n], c[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a, a +n);
		if(a[0]==a[n-1]) cout<<-1<<endl;
		else {
			int i=1;
			while(a[i]==a[0])
				i++;
			cout<<i<<' '<<n-i<<endl;
			for(int j=0;j<i;j++) cout<<a[j]<<' ';
			cout<<endl;
			for(int j=i;j<n;j++) cout<<a[j]<<' ';
			cout<<endl;
		}
	}
}