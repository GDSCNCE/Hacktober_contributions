#include<stdio.h>
#include<conio.h>
void main()
{
    float si,p,r,t;
    printf("Enter the value of p\n",p);
    scanf("%f",&p);
    printf("Enter the value of r\n",r);
    scanf("%f",&r);
    printf("Enter the value of t\n",t);
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("Simple interest=%f",si);
    return 0;

}
