#include<stdio.h>
struct vectors{
    int x;
    int y;
};
void vectorsum(struct vectors v1,struct vectors v2,struct vectors v3);
int main(){
    struct vectors v1={14,6};
    struct vectors v2={6,8};
    struct vectors v3={0};
    vectorsum(v1,v2,v3);
    return 0;
}
void vectorsum(struct vectors v1,struct vectors v2,struct vectors v3){
    v3.x=v1.x + v2.x;
    v3.y=v1.y + v2.y;
    printf("your resultant vector's x and y components are %d and %d",v3.x,v3.y);
}
