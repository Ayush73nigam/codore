#include<stdio.h>
#include<string.h>
typedef struct student{
    int roll;
    char name[100];
    float cgpa;
}st;
int main(){
    st s1[3];
    s1[0].roll=2212010;
    strcpy(s1[0].name,"ayush");
    s1[0].cgpa=9.3;

    s1[1].roll=2212011;
    strcpy(s1[1].name,"karan");
    s1[1].cgpa=9.2;

    s1[2].roll=2212012;
    strcpy(s1[2].name,"nigam");
    s1[2].cgpa=9.3;

    printf("first student rollno. is %d\n",s1[1].roll);
    printf("first student's name is %s\n",s1[1].name);
    printf("first student's cgpa is %f\n",s1[1].cgpa);
    return 0;
}
