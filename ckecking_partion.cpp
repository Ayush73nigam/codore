#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6,0);
    for(int i=1;i<6;i++){
        cin>>v[i];
    }
    int total_sum=0;
    for(int i=1;i<6;i++){
        total_sum+=v[i];
    }
    int flg=0;
    int prefix_sum=0;
    for(int i=1;i<6;i++){
        prefix_sum+=v[i];
        int suffix_sum=total_sum-prefix_sum;
        if(prefix_sum==suffix_sum){
            flg=i;
            break;
        }
    }
    if(flg>0){
        cout<<"there is a partition at "<<flg<<" index"<<endl;
    }
    else{
        cout<<"there is no partion";
    }
}