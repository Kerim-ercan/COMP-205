#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20

// void array(char word[]){
//     for (int i = 0 ; i<SIZE; i++){
//         word[i] = rand () % 26 + 97;

//         printf("%c", word[i]);
//     }
// }

// int find_char(const char word [], char ch){
//     for (int i = 0; i<SIZE; i++){
//         if(word[i] == ch){
//             return i;
//         }
        
//     }
//     return -1;
    
// }


// int main (){

//    char word [SIZE];
//    char ch = 'c';
//    srand(time(NULL));
//    array(word);
//    printf("\n %c found at : %d\n", ch, find_char(word, ch));
   





//     return 0;
// }


void fill_array (char word[]){
    for (int i = 0; i<SIZE; i++){
        char random = rand()% 26 + 97;
        word[i]= random;
        printf("%c", random);
    }
}
int find_char (const char word[],char ch){
    for(int i = 0; i<SIZE; i++){
        if(ch == word[i]){
            return i;
        }

    }
    return -1;
}


int main (){

        char word [SIZE];
        char guess = 'c';
        srand(time(NULL));

     fill_array(word);

     printf("\n %c find at : %d", guess, find_char(word,guess));






    return 0;
}

