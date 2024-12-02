#include <stdio.h>

int main() {
    FILE *fptr;

    // Dosyayı açma
    fptr = fopen("C:\\Users\\omerv\\Desktop\\c programing\\text.txt", "r");

    // Dosya içeriğini okuyacak buffer
    char content[1000];

    // Dosyanın başarıyla açılıp açılmadığını kontrol et
    if (fptr != NULL) {
        printf("File opened successfully:\n");

        // Dosya içeriğini satır satır oku ve ekrana yazdır
        while (fgets(content, sizeof(content), fptr)) {
            printf("%s", content);
        }

        // Dosyayı kapat
        fclose(fptr);
    } else {
        printf("File could not be opened.\n");
        return 1; // Program hata koduyla çık
    }

    return 0;
}
