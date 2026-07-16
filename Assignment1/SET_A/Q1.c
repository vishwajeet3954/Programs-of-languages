#include<stdio.h>
int main()
{
  int a, b,c;
  printf("Enter base of Triangle:");
  scanf("%d",&a);
  printf("Enter height of Triangle:");
  scanf("%d",&b);
  c=0.5*a*b;
  printf("Area of triangle is:%dcm^2\n",c);
}
