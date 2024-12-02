#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;
    srand(time(0));

    answer = rand () % MAX + MIN;

    while (guess != answer){
        printf("gues the number\n");
        scanf("%d", &guess);
        if (guess < answer){
            printf("too low\n");
        }
        else if(guess > answer){
            printf("to high\n");

        }
        else if (guess == answer){
            printf ("correct!!!\n");

        }
        else{
            printf("enter a int value\n");
        }
    }
    

    return 0;
}