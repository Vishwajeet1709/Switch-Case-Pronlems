//menu driven program to check triangle properties
#include<stdio.h>
int main()
{
    int a,b,c,i=1,d,choice;
    while(i)
    {
        printf("\n\n 1. Check Equilateral Triangle. \n 2. Check Isosceles Triangle. \n 3. Check Right Angle Triangle. \n 4. To Exit.\n\n Enter your choice : ");
        scanf("%d",&choice);
    switch(choice)
    {
        case 1 : printf("\n\nEnter three sides of triangle : ");
                 scanf("%d%d%d",&a,&b,&c);
                 if(a==b && b==c)
                    printf("\n\nYes, this is an Equilateral Triangle.\n");
                else
                    printf("\n\nNo, this is not an Equilateral Triangle.\n");
                 break;

        case 2 : printf("\n\nEnter three sides of triangle : ");
                 scanf("%d%d%d",&a,&b,&c);
                 if(a==b || b==c || c==a)
                    printf("\n\nYes, this is an Isosceles Triangle.\n");
                else
                    printf("\n\nNo, this is not an Isosceles Triangle.\n");
                 break;

        case 3 : printf("\n\nEnter three sides of triangle : ");
                 scanf("%d%d%d",&a,&b,&c);
                 if((a*a)==(b*b)+(c*c) || (b*b)==(c*c)+(a*a) || (c*c)==(b*b)+(a*a))
                    printf("\n\n Yes, this is a Right Angle Triangle.\n\n");
                 else
                    printf("\n\nNo, this is not a Right Angle Triangle.\n\n");
                 break;

        case 4 : i=0;
                 break;
        default : printf("\n\nInvalid choice.\n\n");
    }
    }
    return 0;
}
