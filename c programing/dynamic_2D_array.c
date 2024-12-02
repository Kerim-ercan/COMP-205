#include <stdio.h>
#include <stdlib.h>


int main(){

    int rows = 2;
    int columns = 2;

    int** ptr = (int **) malloc (rows * sizeof(int *));

    if (ptr == NULL){
        printf("memory not allacoted");
        return 0;
    }

    for(int i = 0; i<rows; i++){
         ptr[i] = (int *) malloc (columns * sizeof(int));
        if(ptr[i] == NULL){
            printf("memory not allacoted");
        }
    }


    for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns;j++){
            printf("give a value for array\n");
            scanf("%d", &ptr[i][j]);
        }
    }

    for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns;j++){
            printf("arrray is %d\n", ptr[i][j]);
            
        }
    }

    for(int i = 0; i<rows; i++){
        free(ptr[i]);
    }

    free(ptr);





    return 0;
}