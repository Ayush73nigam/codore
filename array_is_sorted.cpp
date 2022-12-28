#include<iostream.h>
using namespace std;
int main(){
    int a[6];
    for(int ele:a){
        cin>>ele;
    }
    bool b1=true;
    bool b2=true;
    int sym=0;
    for(int i=0;i<6;i++){
        if(a[i]>a[i-1]){
            b1=false;
        }
        else{
            b1=true;
        }
    }
    for(int j=0;j<6;j++){
        if(a[j]<a[j-1]){
            b2=false;  
        }
        else{
            b2=true;
        }
    }
    if(b1==false || b2==false){
        cout<<"the array is sorted";
    }
    else{
        cout<<"the array is not sorted";
    }
    return 0;
}