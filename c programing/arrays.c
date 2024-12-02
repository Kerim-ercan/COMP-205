#include <stdio.h>

int main (){
    // double price []= {5.0,10.0,20.0,13.52};
    // for (int i = 0 ; i < (sizeof(price) / sizeof(price[1])); i++){
    //     printf("%.1lf\n", price[i]);
    // }

    int arr [5][5];

    for (int i = 0; i<5;i++){
        for(int j = 0; j<5; j++){
            arr[i][j]= j;
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", arr[i][j]);  // Aynı satırda yazdırır
    }
    printf("\n"); // Her satırdan sonra bir alt satıra geçer
}

    return 0;
}