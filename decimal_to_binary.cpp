#include<iostream.h>
using namespace std;
int main(){
    int number;
    cin>>number;
    long int result=0;
    int power=1;
    int r;
    while(number>0){
        r=number%2;
        result=result+ r*power;
        power=power*10;
        number=number/2;
    }
    cout<<"the binary form of the given number is "<<result;
    return 0;
}