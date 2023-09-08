#include <bits/stdc++.h>
#define f first
#define ss second
#define yo cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define int long long
const int mod = 1000000007;
using namespace std;
int func(int n)
{
  if(n==6)
    return n;
  else if(n>0)
    return n+3;
  int r= func(n+6);
  n+=1;
  n= min(r,func(n));
  return n;
}
bool prime[1000001];
void SieveOfEratosthenes(int n)
    {
    memset(prime, true, sizeof(prime));
    prime[1]=false;
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}
signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1; 
    cin>>t;
    SieveOfEratosthenes(1000000);
    while(t--)
    {
      int n; cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++)
        cin>>v[i];
      int count=0;
      for(int i=0;i<n;i++)
      {
        int sum=0;
        for(int j=i;j<n;j++)
        {
          sum+=v[j];
          if(prime[sum])
            count++;
        }
      }
      cout<<count<<endl;
    }
}