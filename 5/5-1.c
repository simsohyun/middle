#include <stdio.h>

int main()
{
    int num1, num2, res;
    char op;

    printf("Arithmetic operation input : ");
    scanf("%d %c %d",&num1, &op, &num2);

    switch(op)
        {
            case '+':
            res = num1 + num2;
            break;
            case '-':
            res = num1 - num2;
            break;
            case '*':
            res = num1 * num2;
            break;
            case '/':
            res = num1 / num2;
            break;
        }

        printf("%d %c %d = %d\n", num1,op,num2,res);
        return 0;
}

