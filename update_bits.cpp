#include<iostream>
using namespace std;  //updating last two bits from given position with 1s
int main(){           // it is known as masking
    int n,position;
    cin>>n>>position;
    int intermediate=(n & ~(3<<position));
    int res=(intermediate | (3<<position));
    cout<<res<<endl;
    return 0;
}