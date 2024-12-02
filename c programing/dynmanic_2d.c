#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define Rows 4
#define Columns 5

int main() {
    srand(time(NULL)); // Rastgele sayı üreticisini başlatma

    // Dinamik 2D array tahsisi
    int **arr = (int **)malloc(Rows * sizeof(int *));
    if (arr == NULL) {
        printf("Memory allocation failed for rows\n");
        return 1;
    }

    for (int i = 0; i < Rows; i++) {
        arr[i] = (int *)malloc(Columns * sizeof(int));
        if (arr[i] == NULL) { // Doğru bellek kontrolü
            printf("Memory allocation failed for row %d\n", i);
            return 1;
        }
    }

    // Rastgele değer atama
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Columns; j++) {
            arr[i][j] = rand() % 100; // 0-99 arasında rastgele sayı
        }
    }

    // Diziyi yazdırma
    printf("Array elements:\n");
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Columns; j++) {
            printf("%d ", arr[i][j]); // Değerleri yazdır
        }
        printf("\n");
    }

    // Tahsis edilen belleği serbest bırakma
    for (int i = 0; i < Rows; i++) {
        free(arr[i]); // Her satır için belleği serbest bırak
    }
    free(arr); // Ana işaretçiyi serbest bırak

    return 0;
}
