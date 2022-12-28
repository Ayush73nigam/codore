#include<stdio.h>
int main(){
    int a=9,b=3,c=7,d=1,e=2;
    if(a>b){
        if(a>c){
            if(a>d){
                if(a>e){
                    printf("a is greatest of all.");
                }
                else{
                    printf("e is greatest of all.");
                }
            }
            else if(d>e){
                printf("d is greatest of all");
            }
            else{
                printf("e is greatest of all");
            }
        }
        else if(c>d && c>e){
            printf("c is greatest of all");
        }
        else if(d>c && d>e){
            printf("d is greatest of all");
        }
        else{
            printf("e is greatest of all");
            }
    }
    else if(b>c && b>d && b>e){
        printf("b is greatest of all");
    }
    else if(c>b && c>d && c>e){
        printf("c is greatest of all");
    }
    else if(d>b && d>c && d>e){
        printf("d is greatest of all");
    }
    else{
        printf("e is greatest of all");
    }
    return 0;
}