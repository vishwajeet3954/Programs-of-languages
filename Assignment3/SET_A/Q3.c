#include <stdio.h>

int main()

{

    int digit;

    printf("Choises: 1,2,3,4,5,6,7.\n");

    printf("Enter a Choise to know the day of week:");

    scanf("%d",&digit);

    
switch(digit)

    {

        case 1: printf("Monday\n");

                break;

        case 2: printf("Tuesday\n");

                break;

        case 3: printf("Wednesday\n");

                break;

        case 4: printf("Thursday\n");

                break;

        case 5: printf("Friday\n");

                break;

        case 6: printf("Saturday\n");

                break;

        case 7: printf("Sunday\n");

                break;

        default:

                printf("A Week has only 7 Days Enter 1-7 only.");

    }

    return 0;

}