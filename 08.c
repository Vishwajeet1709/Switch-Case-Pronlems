//program to convert a negative number to positive and opposite
#include<stdio.h>
int main()
{
    int choice;
    printf("\n\t Enter any integer : ");
    scanf("%d",&choice);

    switch(choice>0)
    {
        case 1 : printf("\n\t Opposite integer is %d.\n",choice*-1);
        break;

        case 0 : printf("\n\t Opposite integer  is %d.\n",choice*-1);
        break;
    }
    return 0;
}
