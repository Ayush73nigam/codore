#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}
int prime[1000009];
void si(int n){
 
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}
void solve(){
	int t;
	cin>>t;
	for(int i=0;i<1000005;i++)prime[i]=1;
	si(1000000);
	prime[0]=prime[1]=0;
	while(t--){
		int n;
		cin>>n;
		int arr[n+5];
		for(int i=0;i<n;i++)cin>>arr[i];
		int cnt=0,sum;
		for(int i=0;i<n;i++){
			sum=0;
			for(int j=i;j<n;j++){
				sum+=arr[j];
				if(prime[sum])cnt++;
			}
		}
		cout<<cnt<<endl;
	}
}