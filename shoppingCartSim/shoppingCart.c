#include <stdio.h>
#include <string.h>


int main(){
    char currency = '$';
    char itemName[30] = "";
    int numOfItems = 0;
    float price = 0.0f;
    float total = 0.0f;

    //getchar(); If we use BEFORE THERE ARE ANY OTHER PRINTFS it will clear the input buffer which is no good!
    printf("What would you like to buy? ");
    fgets(itemName,sizeof(itemName), stdin);
    itemName[strlen(itemName) - 1] = '\0';

    printf("What is the price for each? ");
    scanf("%f", &price);

    printf("How many would you like? ");
    scanf("%i", &numOfItems);

    if(numOfItems && price){
        total = price * numOfItems;
         printf("Your total for the order of %i %s,which are %.2f%c each, is %.2f%c.\n",numOfItems ,itemName ,price ,currency ,total, currency);
    } else{
        printf("Please come back again soon!\n");
    }

    return 0;
}
