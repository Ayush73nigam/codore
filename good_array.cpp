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
void solve(){
    ll int t;
    cin>>t;
    while(t--){
        ll int n;
        cin>>n;
        ll int arr[n];
        map <ll int,ll int> mpp;
        bool allone=true;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]!=1) allone=false;
            mpp[arr[i]]++;
        }

        if(n==1 || allone){
            cout<<"NO"<<endl;
        }
        else {
            ll sumOne=0,sum=0;
            for(auto it:mpp){
                if(it.first==1) sumOne+=it.second;
                else sum+=(it.second*it.first);
            }
            ll notOne= n-sumOne;
            sum=sum-notOne;

            if(sum>=sumOne){
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    }
} 