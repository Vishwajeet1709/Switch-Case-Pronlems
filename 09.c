//program to convert a even number to its upper nerest odd number
#include<stdio.h>
int main()
{
    int choice;
    printf("\n \t Enter any natural number : ");
    scanf("%d",&choice);
    switch(choice%2)
    {
        case 0 : printf("\n \t %d is the nearest odd number to %d.\n",choice+1,choice);
                 break;

        case 1 : printf("\n \t %d is a odd number itself.\n",choice);
    }
    return 0;
}
