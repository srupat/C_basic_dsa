#include<stdio.h>
void main()
{
    int year;
    printf("Enter Year");
    scanf("%d",&year);
    if(year%4==0)
    {
        if(year%100!=0)
        {
            printf("It IS a Leap Year");
        }
        else if(year%100==0 &&(year%400==0))
                {
                    printf("It IS a Leap Year");
                }
        else
            {
                printf("It is NOT a leap year");
            }
    }
    else
    {
        printf("It is NOT a Leap Year");
    }
}
