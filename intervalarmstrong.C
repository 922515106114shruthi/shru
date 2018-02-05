#include<stdio.h>
#include<conio.h>
void main()
{
int i, rem, sum, temp, tnum;

    printf("The 3-digit Armstrong numbers are : ");

    for (i=150 ; i <= 160; i++)
    {
        tnum = i;
        sum = 0;
        while (tnum > 0)
        {
            rem = tnum % 10;
            temp = rem * rem * rem;
            sum = temp + sum;
            tnum = tnum / 10;
        }
        if (i == sum)
            printf("%d\n", sum);}
            getch();
            }
