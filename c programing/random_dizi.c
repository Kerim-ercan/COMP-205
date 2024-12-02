#include <stdio.h>
#include <stdlib.h>
#include  <time.h>

int main() {

    srand(time(NULL));
   
    int arr[5];

    int lenght = sizeof(arr)/rsizeof(arr[0]);

    for(int i = 0; i<lenght; i++){
        int random = rand() % 20 + 1;
        arr[i] = random;
        
    }

    for(int i = 0; i<lenght;i++){
        printf("%d\t", arr[i]);
    }



    return 0;
}