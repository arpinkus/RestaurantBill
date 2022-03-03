#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumber() {
    for (int i = 0; i > 1; i++) {
        int num = (rand() % (4 - 1 + 1)) + 1;
        return num;
    }
}

float mealCost() {
    float mealCost;
    
    srand(time(0));

    int random = randomNumber();
    printf("%d\n", random);

    switch(randomNumber()) {
        case 1:
        double saladCost = 9.95;
        mealCost = saladCost;
        printf("Salad: $%u\n", saladCost);
        break;
        case 2:
        double soupCost = 4.55;
        mealCost = soupCost;
        printf("Soup: $%u\n", soupCost);
        break;
        case 3:
        double sandwitchCost = 13.25;
        mealCost = sandwitchCost;
        printf("Sandwitch: $%u\n", sandwitchCost);
        break;
        case 4:
        double pizzaCost = 22.35;
        mealCost = pizzaCost;
        printf("Pizza: $%u\n", pizzaCost);
        break;
        default:
        printf("Not equal to a menu item! Something went wrong!");
    }
    return mealCost;
}

void tax() {
    float tax;
    float taxAmount;
    char *percent = '%';
    scanf("%d", tax);
    printf("Tax: %d%c\n", tax, &percent[0]);
}

void main() {
    mealCost();
    tax();
}