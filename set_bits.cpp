#include<iostream>
using namespace std;
int main(){
    int n,position;
    cin>>n>>position;
    int res=(n | (1<<position));
    cout<<res<<endl;
    return 0;
}