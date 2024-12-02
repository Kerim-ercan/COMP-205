#include <stdio.h>



void findValue(int* num){
    *num += 1;
}
int main(){

   int a ;
   int* ptr;
    a= 5;
   ptr = &a;

    *ptr=31;

    printf("%d\n", *ptr);
    printf("%p\n", ptr);

    int numbers [] = {1,5,6,8,90};

    *numbers =2;
    *(numbers+4)= 11;

    printf("frist element%d\n",*numbers);
    printf("last element %d\n", *(numbers+4));

    findValue(&a);

    printf("%d\n" ,a);

    



       
    
    
    
    
    return 0;

}
