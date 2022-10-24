//AUTHOR:ABHASH KUMAR
#include <bits/stdc++.h>
#include <string.h>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
float a,b;
int z;
void Power(float,float);
void Sine(float);
void Square(float);
void Cos(float);
void Tan(float);
void Log(float);
void Baselog(float);
void Add(float,float);
void Substract(float,float);
float Multiply(float,float);
void Division(float,float);
cout<<"WHAT YOU WANT TO FIND: "<<endl;
cout<<"Press '1' for Power: "<<endl;
cout<<"Press '2' for Sin: "<<endl;
cout<<"Press '3' for Square: "<<endl;
cout<<"Press '4' for Cos: "<<endl;
cout<<"Press '5' for Tan: "<<endl;
cout<<"Press '6' for Log: "<<endl;
cout<<"Press '7' for Base Log: "<<endl;
cout<<"Press '8' for Addition: "<<endl;
cout<<"Press '9' for Substraction: "<<endl;
cout<<"Press '10' for Multiplication: "<<endl;
cout<<"Press '11' for Division: "<<endl;
cin>>z;
switch(z)
{
case 1:
cout<<"Enter the Number for Calculating its Power: "<<endl;
cin>>a;
cout<<"Enter the Power for a Number: "<<endl;
cin>>b;
Power(a,b);
break;

case 2:
cout<<"Enter the Number for Calculating SIN: "<<endl;
cin>>a;
Sine(a);
break;

case 3:
cout<<"Enter the Number for Calculating Square: "<<endl;
cin>>a;
Square(a);
break;

case 4:
cout<<"Enter the Number for Calculating COS: "<<endl;
cin>>a;
Cos(a);
break;

case 5:
cout<<"Enter the Number for Calculating TAN: "<<endl;
cin>>a;
Tan(a);
break;

case 6:
cout<<"Enter the Number for Calculating LOG: "<<endl;
cin>>a;
Log(a);
break;

case 7:
cout<<"Enter the Number for Calculating LOG WITH BASE 10: "<<endl;
cin>>a;
Baselog(a);
break;
case 8:
cout<<"Enter the Number for Calculating Addition: "<<endl;
cin>>a;
cin>>b;
Add(a,b);
break;
case 9:
cout<<"Enter the Number for Calculating Substraction: "<<endl;
cin>>a;
cin>>b;
Substract(a,b);
break;
case 10:
cout<<"Enter the Number for Calculating Multiplication: "<<endl;
cin>>a;
cin>>b;
Multiply(a,b);
break;
case 11:
cout<<"Enter the Number for Calculating Division: "<<endl;
cin>>a;
cin>>b;
Division(a,b);
break;

}
}

void Power(float x,float y)
{
float p;
p = pow(x,y);
cout<<"Power: "<<p;
}

void Sine(float x)
{
float s;
s = sin(x);
cout<<"Sin: "<<s;
}

void Square(float x)
{
float sq;
sq = sqrt(x);
cout<<"Square of a Given Value is: "<<sq;
}

void Cos(float x)
{
float c;
c = cos(x);
cout<<"COS: "<<c;
}

void Tan(float x)
{
float t;
t = tan(x);
cout<<"TAN: "<<t;
}

void Log(float x)
{
float l;
l = log(x);
cout<<"Natural Logarithm: "<<l;
}

void Baselog(float x)
{
float bl;
bl = log10(x);
cout<<"LOG with Base 10: "<<bl;
}
void Add(float x,float y)
{
    float add;
    add = x + y ;
    cout<<"addition: "<<add;
}
void Substract(float x,float y)
{
    float subs;
    subs = x - y;
    cout<<"addition: "<<subs;
}
void Multiply(float x,float y)
{
    float mul;
    mul = x*y;
    cout<<"addition: "<<mul;

}
void Division(float x,float y)
{
    float div;
    div = x/y;
    cout<<"addition: "<<div;
}


