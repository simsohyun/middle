#include <stdio.h>

int main()
{
    char fruit[20];
    int cnt;

    printf("favorite fruit : ");
    scanf("%s",fruit);

    printf("how much : ");
    scanf("%d",&cnt);
    printf("%sis give %d you",fruit,cnt);

    return 0;
}

