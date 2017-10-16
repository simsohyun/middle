#include <stdio.h>

int main()
{
    int price1, price2, price3;
    int total, change, rest;
    int w5000, w1000, w500, w100, w50, w10;

    printf("Enter three items : ");
    scanf("%d %d %d", &price1, &price2, &price3);

    total = price1 + price2 + price3;
    change = 10000 - total;

    w5000 = change / 5000;
    rest = change % 5000;

    w1000 = rest / 1000;
    rest = rest % 1000;

    w500 = rest / 500;
    rest = rest % 500;

    w100 = rest / 100;
    rest = rest % 100;

    w50 = rest / 50;
    rest = rest % 50;

    w10 = rest / 10;

    printf("change is %d\n", change);
    printf("w5000 : %d\n", w5000);
    printf("w1000 : %d\n", w1000);
    printf("w500 : %d\n", w500);
    printf("w100 : %d\n", w100);
    printf("w50 : %d\n", w50);
    printf("w10 : %d\n", w10);

    return 0;
}

