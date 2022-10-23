#include<stdio.h>
#include<math.h>
int main()
{
    int c=0,n,rem,s=0,n1,n2;
    printf("enter any number\n");
    scanf("%d", &n);
    n1=n;
    while(n!=0)
    {
        c++;
        n=n/10;
    }
    n2=n1;
    while(n1!=0)
    {
        rem=n1%10;
        s=s+pow(rem,c);
        n1=n1/10;
    }
    if(s==n2)
        printf("given number is armstrong");
    else
        printf("given number is not armstrong");
    getch();
    return 0;
}
