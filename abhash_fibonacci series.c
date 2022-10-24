#include<stdio.h>
#include<conio.h>
int fibonacci(int);
int main()
{
   // clrscr();
    int n;
    printf("Enter number of terms to be printed");
    scanf("%d", &n);
    fibonacci(n);
    getch();
    return 0;

}
int fibonacci(int n)
{
    int n1=0,n2=1,n3,i;
    printf("\n fibonacci series...\n");
    printf("1.%d\n2.%d",n1,n2);
    for(i=3;i<=n;i++)
    {
        n3=n2+n1;
        printf("\n%d.%d",i,n3);
        n1=n2;
        n2=n3;
    }
}
