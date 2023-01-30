//Write a menu driven program for 1. addition 2. subtraction 3. multiplication 4. divison 5. exit
#include<stdio.h>
int main()
{
    int choice,a,b,i=1;
    float div;

    while(i)
    {
        printf("\n        Welcome!!! \n\n 1 : To Add Two Numbers. \n 2 : To Subtract \n 3 : To Multiply \n 4 : To Divide \n 5 : To Exit \n Please enter your choice for following tasks : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : printf("\nEnter Two Numbers To Add : ");
                     scanf("%d%d",&a,&b);
                     printf("\nAddition of %d and %d is = %d\n",a,b,a+b);
                     break;

            case 2 : printf("\nEnter Two Numbers To Subtract : ");
                     scanf("%d%d",&a,&b);
                     if(a>b)
                     printf("\nDifference of %d and %d is = %d\n",a,b,a-b);
                     else
                     printf("\nDifference of %d and %d is = %d\n",a,b,b-a);
                     break;

            case 3 : printf("\nEnter Two Numbers To Multiply : ");
                     scanf("%d%d",&a,&b);
                     printf("\nMultiplication of %d and %d is = %d\n",a,b,a*b);
                     break;

            case 4 : printf("\nEnter Two Numbers To Devide : ");
                     scanf("%d%d",&a,&b);
                     div=a/b;
                     printf("\n Division of %d and %d is = %f\n",a,b,div);
                     break;

            case 5 : i=0;
                     break;

            default : printf("\nEnter a valid choice.\n");
        }
    }
    return 0;
}
