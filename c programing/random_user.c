#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int Lenght;
    printf("enter a value for size of array\n");
    scanf("%d", &Lenght);

    int *arr = (int *)malloc(Lenght * sizeof(int));
    if (arr == NULL) { // Bellek ayırma kontrolü
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i<Lenght; i++){
        int random = rand() % 5 + 1;
        arr[i]= random;
    }

    printf("*********************************\n");
    for(int i = 0; i<Lenght; i++){
        printf("%d\n", arr[i]);
    }

   

    free(arr);




    return 0;
}