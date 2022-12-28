#include<iostream.h>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int k=0;k<=(n-i);k++){
            cout<<" ";
        }
        for(int j=0;j<(2*i-1);j++){
            cout<<(char)('A'+j);
        }
        cout<<"\n";
    }
    for(int l=6;l<=9;l++){
        for(int m=0;m<=l-5;m++){
            cout<<" ";
        }
        int no_of_stars=19-2*l;
        for(int n=0;n<no_of_stars;n++){
            cout<<(char)('A'+n);
        }
        cout<<"\n";
    }
    return 0;
}