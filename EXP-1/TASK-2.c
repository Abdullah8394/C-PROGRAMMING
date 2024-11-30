/*
    EXP NO.1 : TASK-2
    Title: WAP to get students PCM marks from the user and find the average and eligibility.
    Name: KHAN ABDULLA ABDUL REHMAN
    Class & Div: FE & E
    UIN: 241S055
*/

#include <stdio.h>
int main()
{
    int chemistry, maths, physics, avg;
    printf("Enter the marks of chemistry:");
    scanf("%d", &chemistry);

    printf("Enter the marks of Maths:");
    scanf("%d", &maths);

    printf("Enter the marks of Physics:");
    scanf("%d", &physics);

    avg = (chemistry + maths + physics) / 3;
    printf("The avg of pcm is %d\n", avg);
    avg >= 50 ? printf("Student is eligible for admission") : printf("Student isn't eligible for admission");


    return 0;
}

/*       **OUTPUT-1**
Enter the marks of chemistry:80
Enter the marks of Maths:85
Enter the marks of Physics:90
The avg of pcm is 85
Student is eligible for admission

         **OUTPUT-2**
Enter the marks of chemistry:45
Enter the marks of Maths:35
Enter the marks of Physics:40
The avg of pcm is 40
Student isn't eligible for admission
*/
