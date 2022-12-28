#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0;i<8;i++){
        int ele;
        cout<<"enter element:";
        cin>>ele;
        v.push_back(ele);
    }
    int left_pointer=7;
    int right_pointer=0;
    while(right_pointer<left_pointer){
        if(v[right_pointer]==1 && v[left_pointer]==0){
            v[left_pointer--]=1;
            v[right_pointer++]=0;
        }
        if(v[right_pointer]==0){
            right_pointer++;
        }
        if(v[left_pointer]==1){
            left_pointer--;
        }
    }
    for(int i=0;i<8;i++){
        cout<<v[i]<<"  ";
    }
    return 0;
}