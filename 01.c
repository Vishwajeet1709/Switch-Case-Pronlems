//write a program to take months and print no of days in the month
#include<stdio.h>
int main()
{
    int choice;
    printf("\nEnter a number of month : ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1 : printf("It is January, and it has 31 days in a month.\n");
                 break;
        case 2 : printf("It is February, and it has either 28 days in a ordinary month, or 29 in leap year.\n");
                 break;
        case 3 : printf("It is March, and it has 31 days in a month.\n");
                 break;
        case 4 : printf("It is April, and it has 30 days in a month.\n");
                 break;
        case 5 : printf("It is May, and it has 31 days in a month.\n");
                 break;
        case 6 : printf("It is June, and it has 30 days in a month.\n");
                 break;
        case 7 : printf("It is July, and it has 31 days in a month.\n");
                 break;
        case 8 : printf("It is August, and it has 31 days in a month.\n");
                 break;
        case 9 : printf("It is September, and it has 30 days in a month.\n");
                 break;
        case 10 : printf("It is October, and it has 31 days in a month.\n");
                 break;
        case 11 : printf("It is November, and it has 30 days in a month.\n");
                 break;
        case 12 : printf("It is December, and it has 31 days in a month.\n");
                 break;
        default : printf("INVALID CHOICE!!!\n");
    }
    return 0;
}
