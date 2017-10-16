#include <stdio.h>

int main()
{
    int lotto[6];
    int num;
    int cnt =0;
    int i;
    int dup;

    cnt =0;
    while(cnt<6)
    {
        printf("Enter Lotto number : ");
        scanf("%d",&num);
        dup =0;

        for(i=0;i<cnt;i++)
        {
            if(num==lotto[i])
            {
                dup = 1;
                break;
            }
        }
        if(dup==0)
        {
            lotto[cnt] = num;
            cnt++;
        }
        else
        {
            printf("I have the same number.\n");
        }
    }

    printf("Lotto number entered : ");
    for(i=0;i<6;i++)
    {
        printf("%5d", lotto[i]);
    }
    return 0;
}

