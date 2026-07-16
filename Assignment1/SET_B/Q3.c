#include<stdio.h>
float main()
{       
        float u,a,t;
        printf("Enter Velocity, Acceleration and Time: ");
        scanf("%f %f %f", &u, &a, &t);
        printf("The Final Velocity is: %.2f", u+a*t);
        printf("\nThe Distance is:%.2f\n", u+a*t*t);
}       

