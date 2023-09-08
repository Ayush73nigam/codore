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
#include <vector>

vector <int> result(vector <int> &v ,int n,int d){
    int k=d%n;
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=v[i];
    }
    for(int i=k;i<n;i++){  
        v[i-k]=v[i];
    }
    int j=0;
    for(int i=0;i<k;i++){  // vector is occupied till n-k-1 index
        v[n-k+i]=temp[i];      // so start filling from n-k+0 to n-1 index
    }
    // we could have also stored remaining elements in this way----
    
    // for(int i=n-k;i<n;i++){  // vector is occupied till n-k-1 index
    //     v[i]=temp[i-(n-k)];      // so start filling from n-k+0 to n-1 index
    // }

    return v;
}
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        vector <int> v;
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            v.push_back(ele);
        }
        v=result(v,n,d);
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}