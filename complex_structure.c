#include<stdio.h>
struct complex{
    int real;
    int imaginary;
};
int main(){
    struct complex c1={6,7};
    struct complex *ptr;
    ptr=&c1;
    printf("the real part of complex number is %d\n",ptr->real);
    printf("the imaginary part of complex number is %d\n",ptr->imaginary);

    printf("the real part of complex number is %d\n",(*ptr).real);
    printf("the imaginary part of complex number is %d\n",(*ptr).imaginary);
    return 0;
}
