#include <stdio.h>

int main()
{
    int right = 19;
    int num, cnt=0;

    while(1)
    {
        printf("Enter number : ");
        scanf("%d",&num);
        cnt++;

        if(num == right)
        {
            printf("collect\n");
            break;
        }
        else if(num<right)
            {
                printf("right is bigger than %d\n",num);
            }
            else if(num>right)
            {
                printf("right is smaller than %d\n",num);
            }
    }
    printf("Number of attempts is %d\n",cnt);
    return 0;
}

