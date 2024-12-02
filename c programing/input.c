#include <stdio.h>
#include <string.h>
int main (){


    int age;
    char name [25];

    printf("whats  your  name");
    //scanf("%s", &name);

    fgets (name ,25,stdin);  //ismimi boşluklu alabilmesi için f gets kullandık
    name [strlen(name)-1] = '\0';
    printf("you name is %s old", name);

    printf("how old are you");

    scanf("%d" ,&age);

    printf("you are %d old", age);


 return 0 ;
}