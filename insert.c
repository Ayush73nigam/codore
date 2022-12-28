#include<stdio.h>   //program to insert 4 new bits in a given number.
int main(){
    int n=1832;   // n->>arbitrary number
    int p=13;     // p->>number to be inserted
    int extract=(n&(~(15<<5)));
    int e=(p<<5);
    int result=(extract | e);
    printf("%d\n",result);
    return 0;
}