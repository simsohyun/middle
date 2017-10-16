#include <stdio.h>

int main()
{
int rich = 150;
double grade = 4.1;
double pay;

if(rich < 100)
{
pay = 199 * 0.6;
}
else if(grade >= 4.0)
{
pay = 100 * 0.8;
}

printf("to be paid next semester is %.0lf\n",pay);

return 0;
}
