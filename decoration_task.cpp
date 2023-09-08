 # include<bits/stdc++.h>
 using namespace std;
int main (){
int t; cin>>t;
while(t--){
   long long int n; cin>>n;
   long long int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    long long int a=0;
    for(int i=0; i<n; i++){
        a=a+arr[i];
    }
    long long int v=a/n;
    long long int b=0;
       for(int i=0; i<n-1; i++){
        b=b+arr[i];}
    long long int ans=min(b, v);
    cout<<ans<<endl;
}
return 0;
}