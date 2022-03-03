#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumber() {
    time_t t;
    srand((unsigned) time(&t));
    int num = rand() % 4;
    printf("num: %d\n",num);
    return num;
}

void main() {
    double mealCost;
    double saladCost;
    double soupCost;
    double sandwitchCost;
    double pizzaCost;

    int random = randomNumber();
    printf("%d\n", random);

    switch(random) {
        case 1:
        saladCost = 9.95;
        mealCost = (double) saladCost;
        printf("Salad: $%u\n", saladCost);
        break;
        case 2:
        soupCost = 4.55;
        mealCost = (double) soupCost;
        printf("Soup: $%u\n", soupCost);
        break;
        case 3:
        sandwitchCost = 13.25;
        mealCost = (double) sandwitchCost;
        printf("Sandwitch: $%u\n", sandwitchCost);
        break;
        case 4:
        pizzaCost = 22.35;
        mealCost = (double) pizzaCost;
        printf("Pizza: $%u\n", pizzaCost);
        break;
        default:
        printf("Not equal to a menu item! Something went wrong!");
    }
    
    float tax;
    float taxAmount;
    char percent = '%';
    scanf("%d", tax);
    printf("Tax: %d%c\n", tax, percent);
}