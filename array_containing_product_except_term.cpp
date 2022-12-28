#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0;i<4;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    int product=1;
    for(int i=0;i<4;i++){
        product*=v[i];
    }
    vector<int> v1(4,0);
    for(int i=0;i<4;i++){
        v1[i]=product/v[i];
    }
    for(int i=0;i<4;i++){
        cout<<v1[i]<<"  ";
    }
}