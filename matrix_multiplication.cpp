#include<iostream>
using namespace std;
int main(){
    int arr1[2][3]={{1,2,3},{4,5,6}};
    int arr2[3][2]={{1,2},{3,4},{5,6}};
    int res[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            res[i][j]=0;
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                res[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<res[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}