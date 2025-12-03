#include <stdio.h>
#include <string.h>

int main(){
    char firstAdj[50] = "";
    char noun[30] = "";
    char secondAdj[50] = "";
    char verb[30] = "";
    char thirdAdj[50] = "";

    printf("Enter an adjective: ");
    fgets(firstAdj, sizeof(firstAdj), stdin);
    firstAdj[strlen(firstAdj) - 1] = '\0';

    printf("Enter a noun: ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

     printf("Enter a second adjective: ");
    fgets(secondAdj, sizeof(secondAdj), stdin);
    secondAdj[strlen(secondAdj) - 1] = '\0';

     printf("Enter a verb(ending with -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

     printf("Enter a third adjective: ");
    fgets(thirdAdj, sizeof(thirdAdj), stdin);
    thirdAdj[strlen(thirdAdj) - 1] = '\0';
    

    printf("Today I went to a %s zoo\n In an exhibit, I saw %s.\n %s was %s and %s!\n I was %s!\n",firstAdj ,noun, noun ,secondAdj, verb, thirdAdj);
    return 0;
}