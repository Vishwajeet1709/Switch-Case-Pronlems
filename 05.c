//program to print comparitive digeree good for 1, better for 2, and best if choice is 3
#include<stdio.h>
int main()
{
    int choice;
    printf("Enter a choice from one to three : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 : printf("\n\tGOOD");
                 break;

        case 2 : printf("\n\tBETTER");
                 break;

        case 3 : printf("\n\tBEST");
                 break;
        default : printf("\n\tINVALID");
    }
    return 0;
}
