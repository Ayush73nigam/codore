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
    int t;
    cin>>t;
    while(t--){
        string a,b,s1="";
        cin>>a>>b;
         a=a+b;
        int n;
        cin>>n;
        int arr[300]={0};
        for(int i=0;i<a.size();i++){
            if(a[i]==' '){
                continue;
            }
            else{
                arr[a[i]]++;
            }
        }
        while(n--){
            string x;
            cin>>x;
            s1=s1+x;
        }
        int sarr[300]={0};
        for(int i=0;i<s1.size();i++){
            sarr[s1[i]]++;
        }
        bool flag=true;
        for(int i=0;i<s1.size();i++){
            if(sarr[s1[i]]>arr[s1[i]]){
                flag=false;
                break;
            }
        }
        (flag)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
}