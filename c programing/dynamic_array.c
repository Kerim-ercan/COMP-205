#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main (){
    int variables;
    int* ptr = (int*) malloc (SIZE * sizeof(int));

    if (ptr == NULL){
        printf("memory not allocated\n");
        return 0;
    }
    
    for (int i = 0 ; i< SIZE; i++){
        printf("give a variable for array\n");

        scanf("%d", &variables);

        ptr [i] = variables;


    }


    for (int i = 0; i<SIZE; i++){
        printf("%d\t", ptr[i]);
    }
 
    free(ptr);


    
    
    
    
    
    
    return 0;
}