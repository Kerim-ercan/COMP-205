#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    srand(time(NULL));

    int rows = 3;
    int columns = 2;

    int** arr = (int **) malloc (rows * sizeof(int *));

    if(arr == NULL){
        printf("memory not allacoted");
        return 0;
    }

    for (int i = 0; i<rows; i++){
        arr[i] = (int *) malloc (columns * sizeof(int));

        if (arr[i] == NULL){
            printf("memory not allacoted");
            return 0;
        }
    }


    for(int i = 0; i<rows; i++){
        for(int j= 0; j<columns; j++){
            int random = rand () % 5 + 1;

            arr[i][j] = random;
        }
    }



    for (int i = 0; i<rows;i++){
        for(int j =  0; j<columns;j++){
            printf(" %d", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i<rows; i++){
        free(arr[i]);
    }

    free(arr);






    return 0;
}