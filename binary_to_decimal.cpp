#include<iostream.h>
using namespace std;
int main(){
    int number;
    cin>>number;
    int r;
    int power=1;
    int decimal=0;
    while(number>0){
        r=number%10;
        decimal=decimal+r*power;
        power=power*2;
        number=number/10;
    }
    cout<<"the decimal form of the number is "<<decimal;
    return 0;
}