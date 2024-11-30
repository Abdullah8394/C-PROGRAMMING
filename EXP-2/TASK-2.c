/*
    Exp. No.2 : TASK-1
    Title: WAP to find the sum of all the odd numbers between numbers entered by the user
    Name: KHAN ABDULLA ABDUL REHMAN
    Class & Div: FE & E
    UIN: 241S055
*/

#include <stdio.h>
int main()
{

    int start, end, sum = 0;

    printf("\t\t *SUM OF ODD NUMBERS* \n\n");

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    if (start % 2 == 0)
    {
    start++;
    }

    for (int i = start; i <= end; i += 2)
    {
    sum += i;
    }

    printf("The sum of all odd numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}

/*      **OTPUT**

*SUM OF ODD NUMBERS*

Enter the starting number: 1
Enter the ending number: 5
The sum of all odd numbers between 1 and 5 is: 9



*/
