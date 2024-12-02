#include <stdio.h>
#include <stdlib.h> // malloc ve free için gerekli

int main() {
    int n = 5; // Başlangıçta 5 elemanlık bir dizi

    int* ptr;

    // Bellek ayırma
    ptr = (int*) malloc(n * sizeof(int));

    // Bellek kontrolü
    if (ptr == NULL) {
        printf("Initial memory allocation failed!\n");
        return 0;
    }

    // Kullanıcıdan başlangıç değerlerini alma
    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    // Belleği genişletme
    ptr = (int*) realloc(ptr, 6 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory reallocation failed!\n");
        free(ptr); // Belleği serbest bırak
        return 0;
    }
    n = 6; // Yeni boyutu güncelle

    // Yeni eleman için değer alma
    printf("Enter 1 more value:\n");
    scanf("%d", ptr + 5); // 6. eleman (indis 5)

    // Girilen tüm değerleri yazdırma
    printf("Input values:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", *(ptr + i)); // Elemanları yazdır
    }

    // Belleği serbest bırakma
    free(ptr);

    return 0;
}
