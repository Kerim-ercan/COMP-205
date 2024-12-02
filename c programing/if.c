#include <stdio.h>

int main (){

    int age;
    printf("your age\n");
    scanf("%d", &age);
    if(age >= 18){
        printf("you are in\n");
    }
    else if (age<0){
        printf("you are not born\n");
    }
    else{
        printf("you are too young\n");
    }
    return 0 ;
}