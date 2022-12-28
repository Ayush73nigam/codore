#include<iostream.h>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int m;
    int rev=0;
    int r;
    m=n;
    while(m>0){
        r=m%10;
        rev=rev*10+r;
        m=m/10;
    }
    printf("the reverse of the digits is %d",rev);
    return 0;
}