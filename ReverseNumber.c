/*It is a program that accept a number and displays its reverse
  to start:
  -enter any 4-digit number
  -click 'ok'*/

#include <stdio.h>

int main() {
    //number is the variabe for the number entered by the user//
    //revnum is the variable for the reverse number//
    //r is the variable for the remainder//
    int number, revnum = 0, r;
    scanf("%d",&number);
    printf(" Enter number: %d \n",number);
    while  (number !=0)
    {
      r      = number % 10;
      revnum = revnum * 10 + r;
      number = number / 10;
    }
  
    printf("The reverse is: %d \n", revnum);
  
    return 0;
}
  
