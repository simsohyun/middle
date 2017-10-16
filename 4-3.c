#include <stdio.h>

int main()
{
    int mileage, speed, rest;
    int hour, min;
    double sec;

    printf("Enter distance and speed : ");
    scanf("%d%d", &mileage, &speed);

    hour = mileage / speed;
    rest = mileage % speed;

    min = (rest * 60) / speed;
    rest = (rest * 60) % speed;
    sec = (rest * 60.0) / speed;

    printf("The time required is %dhour, %dminutes, %.3lfseconds\n", hour, min, sec);

    return 0;
    }

