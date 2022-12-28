#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,3,2},{14,15,12},{4,5,6}};
    int large=arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>large){
                int temp=large;
                large=arr[i][j];
                arr[i][j]=temp;
            }
        }
    }
    cout<<"the greatest number in the array is "<<large;
    return 0;
}