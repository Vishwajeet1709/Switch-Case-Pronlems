//Program to calculate electricity bill, for first 50 units Rs. 0.5 per unit,for the next 100 units Rs. 0.75 per unit, for next 100 units 1.20 per unit, and for unit above 200 Rs. 1.5 per unit
#include<stdio.h>
int main()
{
    int choice;
    printf("\n\tEnter your electricity consumption in units : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case > 250 : printf("\n\t %d is your unit",choice);
                           break;
        case > 150 : printf("\n\t %d is your unit",choice);
                           break;
        case > 100 : printf("\n\t %d is your unit",choice);
                           break;
        case > 50  : printf("\n\t %d is your unit",choice);

    }
    return 0;
}
