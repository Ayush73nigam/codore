#include<stdio.h>
struct student{
    int houseno;
    int block;
    char city[100];
    char state[100];
};
void printadd(struct student s1);
int main(){
    struct student s1[5];
    printf("enter first person's info:");
    scanf("%d",&s1[0].houseno);
    scanf("%d",&s1[0].block);
    scanf("%s",s1[0].city);
    scanf("%s",s1[0].state);

    printf("enter first person's info:");
    scanf("%d",&s1[1].houseno);
    scanf("%d",&s1[1].block);
    scanf("%s",s1[1].city);
    scanf("%s",s1[1].state);

    printf("enter first person's info:");
    scanf("%d",&s1[2].houseno);
    scanf("%d",&s1[2].block);
    scanf("%s",s1[2].city);
    scanf("%s",s1[2].state);

    printf("enter first person's info:");
    scanf("%d",&s1[3].houseno);
    scanf("%d",&s1[3].block);
    scanf("%s",s1[3].city);
    scanf("%s",s1[3].state);

    printf("enter first person's info:");
    scanf("%d",&s1[4].houseno);
    scanf("%d",&s1[4].block);
    scanf("%s",s1[4].city);
    scanf("%s",s1[4].state);

    printadd(s1[0]);
    printadd(s1[1]);
    printadd(s1[2]);
    printadd(s1[3]);
    printadd(s1[4]);
    return 0;
}
void printadd(struct student s1){
    printf("address is : houseno-%d,blcok-%d,city-%s,state-%s\n",s1.houseno,s1.block,s1.city,s1.state);
}