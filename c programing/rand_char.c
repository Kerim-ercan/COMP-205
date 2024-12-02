#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));

    

  

    char arr [5][5];

    for (int i = 0; i<5; i++){
        for(int j = 0; j<5;j++){
            char rand_char = (rand() % 26 ) +97;
            arr[i][j] = rand_char;
        }
    }
    for (int i = 0; i<5; i++){
        for(int j = 0; j<5;j++){
            printf("%c", arr[i][j]);
            
        }
    printf("\n");
    }




    return 0;
}