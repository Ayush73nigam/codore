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
int setbit_index(int n,int position){
    return ((n & (1<<position))!=0);
}
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sumXOR=0;
    for(int i=0;i<n;i++){
        sumXOR^=arr[i];
    }
    int tempXOR=sumXOR;
    int setbit=0;
    int position=0;
    while(setbit!=1){
        setbit=tempXOR & 1;
        position++;
        tempXOR=tempXOR>>1;
    }
    int newXOR=0;
    for(int i=0;i<n;i++){
        if(setbit_index(arr[i],position-1)){
            newXOR^=arr[i];
        }
    }
    cout<<newXOR<<" "<<(sumXOR^newXOR)<<" "<<endl;
}