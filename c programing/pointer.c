#include <stdio.h>

int main (){

    int x = 5;
    int* ptr;
    ptr = &x;

    *ptr = 13;

    printf("%p\n", &ptr);
    printf("%d\n", *ptr);



    return 0;
}