#include <stdio.h>

int main()
{
    double weight, height, bmi;

    printf("weight(kg)and height(cm) input : ");
    scanf("%lf%lf", &weight,&height);
    height = height*0.01;
    bmi = weight/(height*height);
    (bmi >= 20.0 && bmi < 25.0)?printf("standard\n"):printf("need weight\n");

    return 0;
}

