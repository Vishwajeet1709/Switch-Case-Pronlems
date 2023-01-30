//program to check whether the entered year is leap year or not
#include<stdio.h>
int main()
{
    int choice;
    printf("Enter a year : ");
    scanf("%d",&choice);
    switch(choice%4)
    {
        case 0 : printf("\n\t%d is a leap year.",choice);
                 break;

        default : printf("\n\t%d is not a leap year.",choice);
    }
    return 0;
}
