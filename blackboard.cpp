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
        ll t;
        cin>>t;
        while(t--){
            ll n;
            cin>>n;
            ll arr[n];
            for(ll i=0;i<n;i++){
                cin>>arr[i];
            }
            sort(arr,arr+n);
            cout<<((arr[0]>=0)? arr[n-1] : arr[0])<<endl;
        }
    }