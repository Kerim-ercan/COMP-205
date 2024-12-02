#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3, cols = 3;
    int **matrix;

    // Satırlar için pointer tahsisi
    matrix = (int **)malloc(rows * sizeof(int *));
    
    // Her satır için sütunlar tahsis edilir
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

    // Değer atama
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = i * cols + j;
        }
    }

    // Değer yazdırma
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Belleği serbest bırakma
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
