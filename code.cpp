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
        ll int n,k;
        cin>>n>>k;
        ll int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if((arr[n-1]/k)>=arr[n-2]){
            cout<<(arr[n-1]/k)<<endl;
        }
        else{
        ll int sum=arr[n-1];
        ll int mod=0;
        int i;
        for(i=n-2;i>=0;i--){
            sum+= arr[i];
            if((sum/k)>arr[i-1] && (sum/k)<=arr[i]){
                cout<<((sum/k))<<endl;
                break;
            }
            else if((sum/k)>arr[i-1] && (sum/k)>=arr[i]){
                cout<<((sum/k)-1)<<endl;
                break;
            }
        }
        if(i==0){
            cout<<0<<endl;
        }
        }
}

    // int hash[n+1]={0};
    // for(int i=0;i<n;i++){
    //     hash[b[c[i]]]++;
    // }
    // int count=0;
    // for(int i=0;i<=n;i++){
    //     count+= hash[a[i]];
    // }

    //     int count=0;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(a[i]==b[c[j]]){
    //             count++;
    //         }
    //     }
    // }

        //     sort(arr,arr+n);
        // int xor[n]={0};
        // for(int i=n-1;i>=0;i--){
        //    xor[i]=xor[i-1]^arr[i]; 
        // }
        // int index;
        // for(int i=0;i<n;i++){
        //     if(xor[i]==0){
        //         index=i;
        //         break;
        //     }
        // }
        // ll int sum=0;
        // for(int i=n-1;i>=index;i--){
        //     sum+=arr[i];
        // }