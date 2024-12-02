#include <stdio.h>
#include <stdlib.h>
#include <time.h> // srand ve rand için gerekli

int main() {
    int **array; // 2D dizi için pointer
    int i, j;

    // Rastgele sayı üretimini başlatmak için srand kullanılır
    srand(time(NULL)); // Her çalışmada farklı rastgele değerler

    // 5x5 matris için dinamik bellek tahsisi
    array = (int **) malloc(5 * sizeof(int *));
    for (i = 0; i < 5; i++) {
        array[i] = (int *) malloc(5 * sizeof(int));
    }

    // Matris elemanlarını doldurma
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == j) {
                array[i][j] = 1; // Diyagonal elemanlar 1
            } else {
                array[i][j] = rand() % 10; // Diyagonal dışı elemanlara 0-9 arasında rastgele değer
            }
        }
    }

    // Matrisi yazdırma
    printf("5x5 Matris:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    // Belleği serbest bırakma
    for (i = 0; i < 5; i++) {
        free(array[i]);
    }
    free(array);

    return 0;
}
