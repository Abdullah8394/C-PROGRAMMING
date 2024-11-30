/*
    Exp. No.2 : TASK-1
    Title: WAP to find if entered number is even or odd.
    Name: KHAN ABDULLA ABDUL REHMAN
    Class & Div: FE & E
    UIN: 241S055
*/

#include <stdio.h>
int main ()
{
  int num;
    printf("\t\t\t ****Even odd Finder****\n\n\n");
    printf("enter the number:\n");
    scanf("%d", &num);


  if(num%2==0){
    printf("the entered number is even");
    }

  else{
    printf("the entered number is odd");
    }

  return 0;
}
/*     **OUTPUT-1**

****Even odd Finder****

enter the number:7

the entered number is odd


       **OUTPUT-2**

****Even odd Finder****

enter the number:10

the entered number is even
*/
