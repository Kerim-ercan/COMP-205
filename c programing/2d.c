#include <stdio.h>

int main (){

    int numbers[2][3];
    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns= sizeof(numbers[0])/sizeof(numbers[0][0]);

    numbers[0][0] = 1;
    numbers[0][1] = 1;
    numbers[0][2] = 1;
    numbers[1][0] = 1;
    numbers[1][1] = 1;
    numbers[1][2] = 1;
    
    for (int i = 0; i<rows; i++){
        for(int j = 0 ; j<columns; j++){
            printf("%d", numbers[i][j]);
        }
        printf("\n");
    }

}