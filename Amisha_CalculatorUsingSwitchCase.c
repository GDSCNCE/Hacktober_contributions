//small calculator using switch case
//Answer will be 0 in case 4 if quotient value is in points.

#include<stdio.h>
  int main() {
     int a, b, c;
     char ch;
     printf("Enter two number\n");
     scanf("%d%d", & a, & b);
     fflush(stdin);
     //flush the input buffer.You might use this function if you think that there might be some data in input buffer which can create problems for you while taking user inputs from stdin.
    
      printf("Enter your choice\n");
      printf("1. Enter 1 for addition\n");
      printf("2. Enter 2 for substraction\n");
      printf("3. Enter 3 for multiplication\n);
      printf("4. Enter 4 for division\n");
      printf("5. Enter 5 for modulo division\n");
      scanf("%c", & ch);
      switch (ch) {
      case '1':
        c = a + b;
        break;
      case '2':
        c = a - b;
        break;
      case '3':
        c = a * b;
        break;
      case '4':
        c = a / b;
        break;
      case '5':
        c = a % b; //Modulus division only works with integers.
        break;
      default:
        printf("wrong choice");
      }
      printf("calculated value=%d", c);
             
      return 0;
        
    }
             
             
        
        
        
        
        
        
        
