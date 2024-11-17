// // #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
//
// int main() {
//     // Random sayı üreteci için seed değeri atama
//     srand(time(NULL));
//
//     // 1-100 arasında rastgele bir sayı üret
//     int rastgeleSayi = rand() % 100 + 1;
//     printf("Rastgele sayi: %d\n", rastgeleSayi);
//
//     // 1-6 arasında zar atışı simülasyonu
//     int zar = rand() % 6 + 1;
//     printf("Zar: %d\n", zar);
//
//     return 0;
// }



// #include <stdio.h>
//
// // Dizi elemanlarını yazdıran fonksiyon
// void diziYazdir(int arr[], int size) {
//     for(int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
//
// // Dizi elemanlarını 2 ile çarpan fonksiyon
// void ikiIleCarp(int arr[], int size) {
//     for(int i = 0; i < size; i++) {
//         arr[i] = arr[i] * 2;
//     }
// }
//
// int main() {
//     int sayilar[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int size = sizeof(sayilar) / sizeof(sayilar[0]);
//
//     printf("Orijinal dizi: ");
//     diziYazdir(sayilar, size);
//
//     ikiIleCarp(sayilar, size);
//
//     printf("2 ile carpilmis dizi: ");
//     diziYazdir(sayilar, size);
//
//     return 0;
// }





#include <stdio.h>

int main(void) {
    // 2 boyutlu dizi tanımlama (3x4 matris)
    int matrix[3][4] = {
        {1, 2, 3, 4},    // 0. satır
        {5, 6, 7, 8},    // 1. satır
        {9, 10, 11, 12}  // 2. satır
    };

    // Matrisi yazdırma
    printf("Matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%3d ", matrix[i][j]); // %3d ile düzenli görünüm
        }
        printf("\n");
    }

    // Tek tek elemanlara erişim
    printf("\nmatrix[1][2] = %d\n", matrix[1][2]); // 7 yazdırır

    // Boyutları hesaplama
    int rows = sizeof(matrix) / sizeof(matrix[0]);     // Satır sayısı
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]); // Sütun sayısı

    printf("\nSatir sayisi: %d\n", rows);    // 3
    printf("Sutun sayisi: %d\n", cols);     // 4

    // 3 boyutlu dizi örneği (2x3x4)
    int cube[2][3][4] = {
        { // ilk 2B matris
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        { // ikinci 2B matris
                {13, 14, 15, 16},
                {17, 18, 19, 20},
                {21, 22, 23, 24}
        }
    };

    // 3 boyutlu diziyi yazdırma
    printf("\n3 Boyutlu Dizi:\n");
    for(int i = 0; i < 2; i++) {
        printf("Katman %d:\n", i);
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 4; k++) {
                printf("%3d ", cube[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}