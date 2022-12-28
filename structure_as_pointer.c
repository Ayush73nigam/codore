#include<stdio.h>
struct student{
    int roll;
    char name[100];
    float cgpa;
};
int main(){
    struct student s1={2212010,"ayush",9.4};
    struct student *ptr=&s1;
    printf("your name is %s\n",(*ptr).name);
    printf("your roll no. is %d\n",(*ptr).roll);
    printf("your cgpa is %f\n",(*ptr).cgpa);

    printf("your name is %s\n",ptr->name);
    printf("your roll no. is %d\n",ptr->roll);
    printf("your cgpa is %f\n",ptr->cgpa);
}
