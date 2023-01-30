//Write a program to take a week name and display a unique greeting
#include<stdio.h>
int main()
{
    int choice;
    printf("Enter week number :");
    scanf("%d",choice);

    switch(choice)
    {
        case 1 : printf("\n          Hello There,\n This in Monday, have a good day..!\n");
                 break;
        case 2 : printf("\n          Hello There,\n This in Tuesday, have a good day..!\n");
                 break;
        case 3 : printf("\n          Hello There,\n This in Wednesday, have a good day..!\n");
                 break;
        case 4 : printf("\n          Hello There,\n This in Thursday, have a good day..!\n");
                 break;
        case 5 : printf("\n          Hello There,\n This in Friday, have a good day..!\n");
                 break;
        case 6 : printf("\n          Hello There,\n This in Saturday, have a good day..!\n");
                 break;
        case 7 : printf("\n          Hello There,\n This in Sunday, have a good day..!\n");
                 break;
        default : printf("\nInvalid choice..!\n");

    }
    return 0;
}
