#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"enter number of element:";
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cout<<"enter element:";
        cin>>ele;
        v.push_back(ele);
    }
    int i=0;
    int j=n-1;
    while(j>i){
        if(v[i]%2!=0 && v[j]%2==0){
            int temp;
            temp=v[i];
            v[i++]=v[j];
            v[j--]=temp;
        }
        if(v[i]%2==0){
            i++;
        }
        if(v[j]%2!=0){
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<"  ";
    }
    return 0;
}