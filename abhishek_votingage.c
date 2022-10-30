#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age \n");
    scanf("%d",&age);
    printf("you have entered %d as your age \n",age);
    if(age>=18)
    {
        printf("You can vote!");
    }
    else if(age>=5 )
    {
        printf("you can vote for babies");
    }
    
    
    else if(age>=10)
    {
        printf("you can vote for kids");
    }
    else {
        printf("You can't vote!");
    }
    return 0;
}
