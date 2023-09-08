#include<iostream>
using namespace std;
int main(){
    int n,position;
    cin>>n>>position;

    int bit=(n & (1<<position));
    if(bit!=0){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
}