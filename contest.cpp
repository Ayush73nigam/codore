#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a+b+(a*b)==111){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}



#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int count=0;
        for(int i=0;i<3;i++){
            int ele;
            cin>>ele;
            if(ele==0){
                count++;
            }
        }
        if(count>=2){
            cout<<"Water filling time"<<endl;
        }
        else{
            cout<<"Not now"<<endl;
        }
    }
    return 0;
}


#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,l;
        cin>>n>>k>>l;
        vector<int> length;
        while(n--){
            int m,l1;
            cin>>m>>l1;
            if(l1==l){
                length.push_back(m);
            }
        }
        if(length.size()<k){
            cout<<-1<<endl;
        }
        else{
        sort(length.begin(), length.end());
        int size=length.size();
        int total_size=0;
        if(size>1){
        for(int i=size-1; i>=size-k;i--){
            total_size+= length[i];
        }
        }
        else if(size==1){
            total_size=length[0];
        }
        cout<<total_size<<endl;
        }
    }
    return 0;
}


#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        ll int remove=0;
        ll int total=pow(k,n);
        if(n>=k){
            remove=(n-k+1)*pow(k, k-1);
            ll int result= total-remove;
            cout<< result%(1000000007)<<endl;
        }
        else{
            cout<<k<<endl;
        }
    }
    return 0;
}