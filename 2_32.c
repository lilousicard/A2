#include <stdio.h>

int main() {
    int currentPrice;
    int lastMonthsPrice;

    scanf("%d", &currentPrice);
    scanf("%d", &lastMonthsPrice);

    printf("This house is $%d. The change is $%d since last month.\n", currentPrice, currentPrice-lastMonthsPrice);

    printf("The estimated monthly mortgage is $%0.2lf.\n", (currentPrice * 0.051) / 12);
}

