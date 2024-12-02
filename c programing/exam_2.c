#include <stdio.h>
#define SIZE 4

int quartilers[4] = {68, 75, 84, 100};

void print_frequency(int* freq) {
    for (int i = 0; i < SIZE; i++) {
        printf("freq[%d]: %d\n", i, freq[i]);
    }
    printf("\n");
}

void report_quartile(const int s) {
    static int freq[4] ; // Frekans dizisi statik olmalı
    int count = 1;           // Geçerli skor olup olmadığını kontrol etmek için bayrak

    if (0 <= s && s < quartilers[0]) {
        freq[0]++;
    } else if (quartilers[0] <= s && s < quartilers[1]) {
        freq[1]++;
    } else if (quartilers[1] <= s && s < quartilers[2]) {
        freq[2]++;
    } else if (quartilers[2] <= s && s <= quartilers[3]) {
        freq[3]++;
    } else {
        printf("score %3d is not within the permitted range.\n", s);
        count = 0; // Geçersiz skor olduğunda bayrağı sıfırla
    }

    if (count) {
        print_frequency(freq); // Geçerli skor olduğunda frekansı yazdır
    }
}

int main() {
    report_quartile(18);
    report_quartile(32);
    report_quartile(78);
    report_quartile(85);
    report_quartile(105);
    report_quartile(-5);

    return 0;
}
