#include<stdio.h>
#include<conio.h>
void main()
{
    int weekday;
    printf("Enter number between 1 to 7:\n",weekday);
    scanf("%d",&weekday);
        if(weekday==1)
        printf("Today is Monday\n",1);
            else if (weekday==2)
            {
                printf("Today is Tuesday\n",2);
            }
            else if(weekday==3)
            {
                printf("Today is Wednesday\n",3);
            }
            else if(weekday==4)
            {
                printf("Today is Thursday\n",4);
            }
            else if(weekday==5)
            {
                printf("Today is Friday\n",5);
            }
            else if(weekday==6)
            {
                printf("Today is Saturday\n",6);
            }
            else if(weekday==7)
            {
                printf("Today is Sunday\n",7);
            }
        else
        {
        printf("Invalid input");
        }
    return 0;
}
