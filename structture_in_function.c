#include<stdio.h>
struct student{
    int roll;
    char name[100];
    float cgpa;
};
void func(struct student s1);
int main(){
    struct student s1={2212010,"ayush",9.7};
    func(s1);
    return 0;
}
void func(struct student s1){
    printf("your name is %s\n",s1.name);
    printf("your roll is %d\n",s1.roll);
    printf("your cgpa is %f\n",s1.cgpa);
}