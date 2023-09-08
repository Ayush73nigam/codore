#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}
#include<set>
void solve(){
    int t;
    cin>>t;
    while(t--){
        set<int> s1,s2;
        for(int i=0;i<4;i++){
            int a,b;
            cin>>a>>b;
            s1.insert(a);
            s2.insert(b);
        }
        int r;
        cin>>r;
        int p=(*s1.begin()+ *(--s1.end()))/2;
        int q=(*s2.begin()+ *(--s2.end()))/2;
        if(p-r>=*s1.begin() && p+r<=(*--s1.end()) && q-r>=*s2.begin() && q+r<=(*--s2.end())){
            cout<<p<<" "<<q<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}