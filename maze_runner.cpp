
#include "bits/stdc++.h"
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
// using namespace chrono;
// using namespace __gnu_pbds;
 
#define get(a,n) vi a(n); fr(i,0,n) cin>>a[i];
#define pi M_PI
#define int long long
#define ll long long
#define ld long double
#define vi vector <int>
#define vii vector<pair<int,int>>
#define vvi vector<vector<int>> 
#define pb push_back
#define fr(var,start,to) for(int var=start; var<to; var++)
#define fr3(var,start,to) for(int var=start; var>to; var--)
#define google cout<<"Case #"<<i+1<<": ";
#define nn '\n'
#define mine min_element
#define maxe max_element
#define ub upper_bound
#define lb lower_bound
#define all(x) begin(x),end(x)
#define rall(x) rbegin(x),rend(x)
#define sqrt(x) sqrtl(x)
#define ff first
#define ss second
#define yes cout<<"Yes"<<nn
#define no cout<<"No"<<nn
#define inf 1e18+10
#define MOD 1000000007
#define MOD2 998244353
 
 
// template<class T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update> ;
 
// template<class key, class value, class cmp = std::less<key>>
// using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
// find_by_order(k)  returns iterator to kth element starting from 0;
// order_of_key(k) returns count of elements strictly smaller than k;
 
const int N = 1e5;
 
void anubhav(){
    int n, m; cin >> n >> m;
    vvi a(n, vi(m));
 
    fr(i, 0, n){
        fr(j, 0, m){
            cin >> a[i][j];
        }
    }
 
    vvi dp(n, vi(m, 1));
    
    fr(i, 0, n){
        fr(j, 0, m){
            if(!i && !j) continue;
 
            for(int k = j - 1; k >= 0; k--){
                if(a[i][k] >= a[i][j]){
                    dp[i][j] = max(dp[i][j], dp[i][k] + 1);
                }
            }
 
            for(int k = i - 1; k >= 0; k--){
                if(a[k][j] <= a[i][j]){
                    dp[i][j] = max(dp[i][j], dp[k][j] + 1);
                }
            }
        }
    }
 
    int ans = 1;
    for(auto x : dp){
        for(auto y : x){
            // cout << y << " ";
            ans = max(ans, y);
        }
        // cout << nn;
    }
    cout << ans << nn;
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cout << fixed << setprecision(10);
    int t = 1;
    // cin >> t;
    for(int i = 0; i < t; i++){
        // google 
        anubhav();
    }
 
    return 0;
}